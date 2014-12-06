#pragma once

#include <glbinding/gles/nogles.h>

namespace gles
{

enum class GLextension : int // GLextension is not a type introduced by OpenGL API so far
{
    UNKNOWN = -1,
    GL_EXT_geometry_shader
};

} // namespace gles
