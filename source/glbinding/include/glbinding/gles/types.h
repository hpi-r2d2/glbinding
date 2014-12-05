#pragma once

#include <glbinding/gles/nogles.h>
#include <glbinding/glbinding_api.h>

#include <cstddef>
#include <cstdint>
#include <array>

#include <functional>
#include <ostream>
#include <string>

#ifdef _MSC_VER
#define GL_APIENTRY __stdcall
#else
#define GL_APIENTRY
#endif


namespace gles
{

enum class GLextension : int;
enum class GLenum : unsigned int;
enum class GLboolean : unsigned char;
using GLbitfield = unsigned int;
using GLvoid = void;
using GLbyte = signed char;
using GLshort = short;
using GLint = int;
using GLclampx = int;
using GLubyte = unsigned char;
using GLushort = unsigned short;
using GLuint = unsigned int;
using GLsizei = int;
using GLfloat = float;
using GLclampf = float;
using GLdouble = double;
using GLclampd = double;
using GLeglImageOES = void *;
using GLchar = char;
using GLcharARB = char;
#ifdef __APPLE__
using GLhandleARB = void *;
#else
using GLhandleARB = unsigned int;
#endif
using GLhalfARB = unsigned short;
using GLhalf = unsigned short;
using GLfixed = GLint;
using GLintptr = ptrdiff_t;
using GLsizeiptr = ptrdiff_t;
using GLint64 = int64_t;
using GLuint64 = uint64_t;
using GLintptrARB = ptrdiff_t;
using GLsizeiptrARB = ptrdiff_t;
using GLint64EXT = int64_t;
using GLuint64EXT = uint64_t;
using GLsync = struct __GLsync *;
struct _cl_context;
struct _cl_event;
using GLDEBUGPROC = void (GL_APIENTRY *)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
using GLDEBUGPROCARB = void (GL_APIENTRY *)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
using GLDEBUGPROCKHR = void (GL_APIENTRY *)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
using GLDEBUGPROCAMD = void (GL_APIENTRY *)(GLuint id,GLenum category,GLenum severity,GLsizei length,const GLchar *message,void *userParam);
using GLhalfNV = unsigned short;
using GLvdpauSurfaceNV = GLintptr;
using GLuint_array_2 = std::array<GLuint, 2>;
enum class AttribMask : unsigned int;
enum class ClearBufferMask : unsigned int;

} // namespace gles

namespace std
{

template<>
struct hash<gles::GLextension>
{
    hash<std::underlying_type<gles::GLextension>::type>::result_type operator()(const gles::GLextension & t) const
    {
        return hash<std::underlying_type<gles::GLextension>::type>()(static_cast<std::underlying_type<gles::GLextension>::type>(t));
    }
};

}


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gles::GLextension & value);


namespace std
{

template<>
struct hash<gles::GLenum>
{
    hash<std::underlying_type<gles::GLenum>::type>::result_type operator()(const gles::GLenum & t) const
    {
        return hash<std::underlying_type<gles::GLenum>::type>()(static_cast<std::underlying_type<gles::GLenum>::type>(t));
    }
};

}


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gles::GLenum & value);


namespace std
{

template<>
struct hash<gles::GLboolean>
{
    hash<std::underlying_type<gles::GLboolean>::type>::result_type operator()(const gles::GLboolean & t) const
    {
        return hash<std::underlying_type<gles::GLboolean>::type>()(static_cast<std::underlying_type<gles::GLboolean>::type>(t));
    }
};

}


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gles::GLboolean & value);



namespace std
{

template<>
struct hash<gles::AttribMask>
{
    hash<std::underlying_type<gles::AttribMask>::type>::result_type operator()(const gles::AttribMask & t) const
    {
        return hash<std::underlying_type<gles::AttribMask>::type>()(static_cast<std::underlying_type<gles::AttribMask>::type>(t));
    }
};

}


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gles::AttribMask & value);

namespace glbinding
{

GLBINDING_API gles::AttribMask operator|(const gles::AttribMask & a, const gles::AttribMask & b);
GLBINDING_API gles::AttribMask operator&(const gles::AttribMask & a, const gles::AttribMask & b);
GLBINDING_API gles::AttribMask operator^(const gles::AttribMask & a, const gles::AttribMask & b);

}


namespace std
{

template<>
struct hash<gles::ClearBufferMask>
{
    hash<std::underlying_type<gles::ClearBufferMask>::type>::result_type operator()(const gles::ClearBufferMask & t) const
    {
        return hash<std::underlying_type<gles::ClearBufferMask>::type>()(static_cast<std::underlying_type<gles::ClearBufferMask>::type>(t));
    }
};

}


GLBINDING_API std::ostream & operator<<(std::ostream & stream, const gles::ClearBufferMask & value);


namespace glbinding
{

GLBINDING_API gles::ClearBufferMask operator|(const gles::ClearBufferMask & a, const gles::ClearBufferMask & b);
GLBINDING_API gles::ClearBufferMask operator&(const gles::ClearBufferMask & a, const gles::ClearBufferMask & b);
GLBINDING_API gles::ClearBufferMask operator^(const gles::ClearBufferMask & a, const gles::ClearBufferMask & b);

}
