#pragma once

#include <glbinding/gles/nogles.h>
#include <glbinding/glbinding_api.h>

#include <stddef.h>
#include <KHR/khrplatform.h>

#ifndef GLEXT_64_TYPES_DEFINED
/* This code block is duplicated in glxext.h, so must be protected */
#define GLEXT_64_TYPES_DEFINED
/* Define int32_t, int64_t, and uint64_t types for UST/MSC */
/* (as used in the GL_EXT_timer_query extension). */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#include <inttypes.h>
#elif defined(__sun__) || defined(__digital__)
#include <inttypes.h>
#if defined(__STDC__)
#if defined(__arch64__) || defined(_LP64)
typedef long int int64_t;
typedef unsigned long int uint64_t;
#else
typedef long long int int64_t;
typedef unsigned long long int uint64_t;
#endif /* __arch64__ */
#endif /* __STDC__ */
#elif defined( __VMS ) || defined(__sgi)
#include <inttypes.h>
#elif defined(__SCO__) || defined(__USLC__)
#include <stdint.h>
#elif defined(__UNIXOS2__) || defined(__SOL64__)
typedef long int int32_t;
typedef long long int int64_t;
typedef unsigned long long int uint64_t;
#elif defined(_WIN32) && defined(__GNUC__)
#include <stdint.h>
#elif defined(_WIN32)
typedef __int32 int32_t;
typedef __int64 int64_t;
typedef unsigned __int64 uint64_t;
#else
/* Fallback if nothing above works */
#include <inttypes.h>
#endif
#endif

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
//using GLvoid = void;
using GLbyte = khronos_int8_t;
//using GLshort = short;
using GLint = khronos_int32_t;
//using GLclampx = int;
using GLubyte = khronos_uint8_t;
//using GLushort = unsigned short;
using GLuint = khronos_uint32_t;
using GLsizei = khronos_int32_t;
using GLfloat = khronos_float_t;
using GLclampf = khronos_float_t;
//using GLdouble = double;
//using GLclampd = double;
//using GLeglImageOES = void *;
using GLchar = char;
//using GLcharARB = char;
#ifdef __APPLE__
using GLhandleARB = void *;
#else
//using GLhandleARB = unsigned int;
#endif
//using GLhalfARB = unsigned short;
//using GLhalf = unsigned short;
using GLfixed = khronos_int32_t;
using GLintptr = khronos_intptr_t;
using GLsizeiptr = khronos_ssize_t;
using GLint64 = khronos_int64_t;
using GLuint64 = khronos_uint64_t;
using GLintptrARB = ptrdiff_t;
using GLsizeiptrARB = ptrdiff_t;
using GLint64EXT = khronos_int64_t;
using GLuint64EXT = khronos_uint64_t;
//using GLsync = struct __GLsync *;
//struct _cl_context;
//struct _cl_event;
//using GLDEBUGPROC = void (GL_APIENTRY *)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
//using GLDEBUGPROCARB = void (GL_APIENTRY *)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
//using GLDEBUGPROCKHR = void (GL_APIENTRY *)(GLenum source,GLenum type,GLuint id,GLenum severity,GLsizei length,const GLchar *message,const void *userParam);
//using GLDEBUGPROCAMD = void (GL_APIENTRY *)(GLuint id,GLenum category,GLenum severity,GLsizei length,const GLchar *message,void *userParam);
//using GLhalfNV = unsigned short;
//using GLvdpauSurfaceNV = GLintptr;
//using GLuint_array_2 = std::array<GLuint, 2>;
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
