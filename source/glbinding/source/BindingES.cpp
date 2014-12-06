
#include <glbinding/BindingES.h>

#include <unordered_map>
#include <mutex>
#include <cassert>

namespace
{
    THREAD_LOCAL glbinding::ContextHandle t_context = 0;

    std::recursive_mutex g_mutex;
    std::unordered_map<glbinding::ContextHandle, int> g_bindings;
}

namespace glbinding 
{

std::vector<AbstractFunction *> BindingES::s_additionalFunctions;

const BindingES::array_t & BindingES::functions()
{
    return s_functions;
}

const std::vector<AbstractFunction *> & BindingES::additionalFunctions()
{
    return s_additionalFunctions;
}

size_t BindingES::size()
{
    return s_functions.size() + s_additionalFunctions.size();
}

void BindingES::initialize(const bool resolveFunctions)
{
    initialize(getCurrentContext(), true, resolveFunctions);
}

void BindingES::initialize(
    const ContextHandle context
,   const bool _useContext
,   const bool _resolveFunctions)
{
    g_mutex.lock();
    if (g_bindings.find(context) != g_bindings.end())
    {
        g_mutex.unlock();
        return;
    }
    g_mutex.unlock();

    const int pos = static_cast<int>(g_bindings.size());

    g_mutex.lock();
    g_bindings[context] = pos;
    g_mutex.unlock();

    g_mutex.lock();
    AbstractFunction::provideState(pos);
    g_mutex.unlock();

    if (_useContext)
        useContext(context);

    if (_resolveFunctions)
        resolveFunctions();
}

void BindingES::registerAdditionalFunction(AbstractFunction * function)
{
    s_additionalFunctions.push_back(function);
}

void BindingES::resolveFunctions()
{
    for (AbstractFunction * function : functions())
        function->resolveAddress();

    for (AbstractFunction * function : additionalFunctions())
        function->resolveAddress();
}

void BindingES::useCurrentContext()
{
    useContext(getCurrentContext());
}

void BindingES::useContext(const ContextHandle context)
{
    t_context = context;

    g_mutex.lock();
    if (g_bindings.find(t_context) == g_bindings.end())
    {
        g_mutex.unlock();

        initialize(t_context);
    }
    else
    {
        g_mutex.unlock();
    }

    g_mutex.lock();
    AbstractFunction::setStatePos(g_bindings[t_context]);
    g_mutex.unlock();
}

void BindingES::releaseCurrentContext()
{
    releaseContext(getCurrentContext());
}

void BindingES::releaseContext(const ContextHandle context)
{
    g_mutex.lock();
    AbstractFunction::neglectState(g_bindings[context]);
    g_mutex.unlock();

    g_mutex.lock();
    g_bindings.erase(context);
    g_mutex.unlock();
}

} // namespace glbinding
