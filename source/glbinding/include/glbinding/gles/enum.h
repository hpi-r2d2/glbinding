#pragma once

#include <glbinding/gles/nogles.h>
#include <glbinding/gles/types.h>


namespace gles
{

enum class GLenum : unsigned int
{
    GL_FRAGMENT_SHADER    = 0x8B30,
    GL_GEOMETRY_SHADER    = 0x8DD9,
    GL_VERTEX_SHADER      = 0x8B31,
    GL_TEXTURE_2D         = 0x0DE1,
    GL_TEXTURE_MAG_FILTER = 0x2800,
    GL_TEXTURE_MIN_FILTER = 0x2801,
    GL_TEXTURE_WRAP_S     = 0x2802,
    GL_TEXTURE_WRAP_T     = 0x2803,
    GL_CLAMP              = 0x2900,
    GL_REPEAT             = 0x2901,
    GL_CLAMP_TO_BORDER    = 0x812D,
    GL_CLAMP_TO_EDGE      = 0x812F,
    GL_LINEAR             = 0x2601,
    GL_R8                 = 0x8229,
    GL_DEPTH_COMPONENT    = 0x1902,
    GL_RED                = 0x1903,
    GL_GREEN              = 0x1904,
    GL_BLUE               = 0x1905,
    GL_ALPHA              = 0x1906,
    GL_RGB                = 0x1907,
    GL_RGBA               = 0x1908,
    GL_LUMINANCE          = 0x1909,
    GL_UNSIGNED_BYTE      = 0x1401,
    GL_NEAREST            = 0x2600,
    GL_RGB8               = 0x8051,
    GL_ARRAY_BUFFER       = 0x8892,
    GL_STATIC_DRAW        = 0x88E4,
    GL_ELEMENT_ARRAY_BUFFER = 0x8893,
    GL_FLOAT              = 0x1406,
    GL_DEPTH_TEST         = 0x0B71,
    GL_TEXTURE0           = 0x84C0,
    GL_TEXTURE1           = 0x84C1,
    GL_TRIANGLES          = 0x0004,
    GL_COMPILE_STATUS     = 0x8B81,
    GL_INFO_LOG_LENGTH    = 0x8B84,
    GL_LINK_STATUS        = 0x8B82,
    GL_NO_ERROR           = 0x0,
    GL_INVALID_ENUM       = 0x0500,
    GL_INVALID_VALUE      = 0x0501,
    GL_INVALID_OPERATION  = 0x0502,
    GL_STACK_OVERFLOW     = 0x0503,
    GL_STACK_UNDERFLOW    = 0x0504,
    GL_OUT_OF_MEMORY      = 0x0505,
    GL_INVALID_FRAMEBUFFER_OPERATION = 0x0506
};

static const GLenum GL_FRAGMENT_SHADER = GLenum::GL_FRAGMENT_SHADER;
static const GLenum GL_GEOMETRY_SHADER = GLenum::GL_GEOMETRY_SHADER;
static const GLenum GL_VERTEX_SHADER = GLenum::GL_VERTEX_SHADER;
static const GLenum GL_TEXTURE_2D = GLenum::GL_TEXTURE_2D;
static const GLenum GL_TEXTURE_MAG_FILTER = GLenum::GL_TEXTURE_MAG_FILTER;
static const GLenum GL_TEXTURE_MIN_FILTER = GLenum::GL_TEXTURE_MIN_FILTER;
static const GLenum GL_TEXTURE_WRAP_S = GLenum::GL_TEXTURE_WRAP_S;
static const GLenum GL_TEXTURE_WRAP_T = GLenum::GL_TEXTURE_WRAP_T;
static const GLenum GL_CLAMP = GLenum::GL_CLAMP;
static const GLenum GL_REPEAT = GLenum::GL_REPEAT;
static const GLenum GL_CLAMP_TO_BORDER = GLenum::GL_CLAMP_TO_BORDER;
static const GLenum GL_CLAMP_TO_EDGE = GLenum::GL_CLAMP_TO_EDGE;
static const GLenum GL_LINEAR = GLenum::GL_LINEAR;
static const GLenum GL_R8 = GLenum::GL_R8;
static const GLenum GL_DEPTH_COMPONENT = GLenum::GL_DEPTH_COMPONENT;
static const GLenum GL_RED = GLenum::GL_RED;
static const GLenum GL_GREEN = GLenum::GL_GREEN;
static const GLenum GL_BLUE = GLenum::GL_BLUE;
static const GLenum GL_ALPHA = GLenum::GL_ALPHA;
static const GLenum GL_RGB = GLenum::GL_RGB;
static const GLenum GL_RGBA = GLenum::GL_RGBA;
static const GLenum GL_LUMINANCE = GLenum::GL_LUMINANCE;
static const GLenum GL_UNSIGNED_BYTE = GLenum::GL_UNSIGNED_BYTE;
static const GLenum GL_NEAREST = GLenum::GL_NEAREST;
static const GLenum GL_RGB8 = GLenum::GL_RGB8;
static const GLenum GL_ARRAY_BUFFER = GLenum::GL_ARRAY_BUFFER;
static const GLenum GL_STATIC_DRAW = GLenum::GL_STATIC_DRAW;
static const GLenum GL_ELEMENT_ARRAY_BUFFER = GLenum::GL_ELEMENT_ARRAY_BUFFER;
static const GLenum GL_FLOAT = GLenum::GL_FLOAT;
static const GLenum GL_DEPTH_TEST = GLenum::GL_DEPTH_TEST;
static const GLenum GL_TEXTURE0 = GLenum::GL_TEXTURE0;
static const GLenum GL_TEXTURE1 = GLenum::GL_TEXTURE1;
static const GLenum GL_TRIANGLES = GLenum::GL_TRIANGLES;
static const GLenum GL_COMPILE_STATUS = GLenum::GL_COMPILE_STATUS;
static const GLenum GL_INFO_LOG_LENGTH = GLenum::GL_INFO_LOG_LENGTH;
static const GLenum GL_LINK_STATUS = GLenum::GL_LINK_STATUS;
static const GLenum GL_NO_ERROR = GLenum::GL_NO_ERROR;
static const GLenum GL_INVALID_ENUM = GLenum::GL_INVALID_ENUM;
static const GLenum GL_INVALID_VALUE = GLenum::GL_INVALID_VALUE;
static const GLenum GL_INVALID_OPERATION = GLenum::GL_INVALID_OPERATION;
static const GLenum GL_STACK_OVERFLOW = GLenum::GL_STACK_OVERFLOW;
static const GLenum GL_STACK_UNDERFLOW = GLenum::GL_STACK_UNDERFLOW;
static const GLenum GL_OUT_OF_MEMORY = GLenum::GL_OUT_OF_MEMORY;
static const GLenum GL_INVALID_FRAMEBUFFER_OPERATION = GLenum::GL_INVALID_FRAMEBUFFER_OPERATION;

} // namespace gles
