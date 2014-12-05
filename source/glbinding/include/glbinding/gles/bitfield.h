#pragma once

#include <glbinding/gles/nogles.h>
#include <glbinding/gles/types.h>

#include <glbinding/SharedBitfield.hpp>

namespace gles
{

enum class AttribMask : unsigned int
{
    GL_DEPTH_BUFFER_BIT     = 0x00000100,
    GL_COLOR_BUFFER_BIT     = 0x00004000,
    GL_ALL_ATTRIB_BITS      = 0xFFFFFFFF
};

enum class ClearBufferMask : unsigned int
{
    GL_DEPTH_BUFFER_BIT     = 0x00000100,
    GL_COLOR_BUFFER_BIT     = 0x00004000
};

static const glbinding::SharedBitfield<AttribMask, ClearBufferMask> GL_DEPTH_BUFFER_BIT = AttribMask::GL_DEPTH_BUFFER_BIT;
static const glbinding::SharedBitfield<AttribMask, ClearBufferMask> GL_COLOR_BUFFER_BIT = AttribMask::GL_COLOR_BUFFER_BIT;

} // namespace gles
