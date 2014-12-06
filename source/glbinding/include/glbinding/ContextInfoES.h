#pragma once

#include <glbinding/glbinding_api.h>

#include <set>
#include <string>

namespace gles
{
    enum class GLextension;
}


namespace glbinding
{

class Version;


class GLBINDING_API ContextInfoES
{
public:
    ContextInfoES() = delete;

    static std::set<gles::GLextension> extensions(std::set<std::string> * unknown = nullptr);

    static std::string renderer();
    static std::string vendor();

    static Version version();
};

} // namespace glbinding
