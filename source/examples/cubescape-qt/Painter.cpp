
#include "Painter.h"

#include <cassert>

#include <glbinding/BindingES.h>
#include <glbinding/ContextInfo.h>

#include "../cubescape/CubeScape.h"


Painter::Painter()
    : m_initialized(false)
    , m_cubescape(nullptr)
{
}

Painter::~Painter()
{
    delete m_cubescape;
}

void Painter::initialize()
{
    if (m_initialized)
        return;

    glbinding::BindingES::initialize(true); // only resolve functions that are actually used (lazy)

    glbinding::setAfterCallback([](const glbinding::FunctionCall & /*function*/)
    {
        gles::GLenum error = glbinding::BindingES::GetError();
        assert(error == gles::GL_NO_ERROR);
    });

    glbinding::setCallbackMaskExcept(glbinding::CallbackMask::After, { "glGetError" });

    m_cubescape = new CubeScape();

    m_initialized = true;
}

void Painter::resize(int width, int height)
{
    m_cubescape->resize(width, height);
}

void Painter::draw()
{
    m_cubescape->draw();
}

void Painter::setNumCubes(int numCubes)
{
    m_cubescape->setNumCubes(numCubes);
}

int Painter::numCubes() const
{
    return m_cubescape->numCubes();
}
