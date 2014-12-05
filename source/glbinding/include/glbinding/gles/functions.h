#pragma once

#include <glbinding/gles/nogles.h>
#include <glbinding/gles/types.h>

#include <glbinding/BindingES.h>

namespace gles
{

inline GLuint glCreateShader(GLenum type)
{
    return glbinding::BindingES::CreateShader(type);
}

inline void glShaderSource(GLuint shader, GLsizei count, const GLchar *const* string, const GLint * length)
{
    return glbinding::BindingES::ShaderSource(shader, count, string, length);
}

inline void glCompileShader(GLuint shader)
{
    return glbinding::BindingES::CompileShader(shader);
}

inline GLuint glCreateProgram()
{
    return glbinding::BindingES::CreateProgram();
}

inline void glAttachShader(GLuint program, GLuint shader)
{
    return glbinding::BindingES::AttachShader(program, shader);
}

inline void glLinkProgram(GLuint program)
{
    return glbinding::BindingES::LinkProgram(program);
}

inline void glGenTextures(GLsizei n, GLuint * textures)
{
    return glbinding::BindingES::GenTextures(n, textures);
}

inline void glBindTextures(GLuint first, GLsizei count, const GLuint * textures)
{
    return glbinding::BindingES::BindTextures(first, count, textures);
}

inline void glTexParameteri(GLenum target, GLenum pname, GLint param)
{
    return glbinding::BindingES::TexParameteri(target, pname, param);
}

inline void glBindTexture(GLenum target, GLuint texture)
{
    return glbinding::BindingES::BindTexture(target, texture);
}

inline void glTexImage2D(GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
{
    return glbinding::BindingES::TexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
}

inline void glGenVertexArrays(GLsizei n, GLuint * arrays)
{
    return glbinding::BindingES::GenVertexArrays(n, arrays);
}

inline void glBindVertexArray(GLuint array)
{
    return glbinding::BindingES::BindVertexArray(array);
}

inline void glGenBuffers(GLsizei n, GLuint * buffers)
{
    return glbinding::BindingES::GenBuffers(n, buffers);
}

inline void glBindBuffer(GLenum target, GLuint buffer)
{
    return glbinding::BindingES::BindBuffer(target, buffer);
}

inline void glBufferData(GLenum target, GLsizeiptr size, const void * data, GLenum usage)
{
    return glbinding::BindingES::BufferData(target, size, data, usage);
}

inline GLint glGetAttribLocation(GLuint program, const GLchar * name)
{
    return glbinding::BindingES::GetAttribLocation(program, name);
}

inline void glEnableVertexAttribArray(GLuint index)
{
    return glbinding::BindingES::EnableVertexAttribArray(index);
}

inline void glVertexAttribPointer(GLuint index, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const void * pointer)
{
    return glbinding::BindingES::VertexAttribPointer(index, size, type, normalized, stride, pointer);
}

inline GLint glGetUniformLocation(GLuint program, const GLchar * name)
{
    return glbinding::BindingES::GetUniformLocation(program, name);
}

inline void glEnable(GLenum cap)
{
    return glbinding::BindingES::Enable(cap);
}

inline void glClearColor(GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
{
    return glbinding::BindingES::ClearColor(red, green, blue, alpha);
}

inline void glUseProgram(GLuint program)
{
    return glbinding::BindingES::UseProgram(program);
}

inline void glActiveTexture(GLenum texture)
{
    return glbinding::BindingES::ActiveTexture(texture);
}

inline void glUniform1i(GLint location, GLint v0)
{
    return glbinding::BindingES::Uniform1i(location, v0);
}

inline void glDeleteBuffers(GLsizei n, const GLuint * buffers)
{
    return glbinding::BindingES::DeleteBuffers(n, buffers);
}

inline void glDeleteProgram(GLuint program)
{
    return glbinding::BindingES::DeleteProgram(program);
}

inline void glViewport(GLint x, GLint y, GLsizei width, GLsizei height)
{
    return glbinding::BindingES::Viewport(x, y, width, height);
}

inline void glClear(ClearBufferMask mask)
{
    return glbinding::BindingES::Clear(mask);
}

inline void glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat * value)
{
    return glbinding::BindingES::UniformMatrix4fv(location, count, transpose, value);
}

inline void glUniform1f(GLint location, GLfloat v0)
{
    return glbinding::BindingES::Uniform1f(location, v0);
}

inline void glDrawElementsInstanced(GLenum mode, GLsizei count, GLenum type, const void * indices, GLsizei instancecount)
{
    return glbinding::BindingES::DrawElementsInstanced(mode, count, type, indices, instancecount);
}

inline void glGetShaderiv(GLuint shader, GLenum pname, GLint * params)
{
    return glbinding::BindingES::GetShaderiv(shader, pname, params);
}

inline void glGetShaderInfoLog(GLuint shader, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::BindingES::GetShaderInfoLog(shader, bufSize, length, infoLog);
}

inline void glGetProgramiv(GLuint program, GLenum pname, GLint * params)
{
    return glbinding::BindingES::GetProgramiv(program, pname, params);
}

inline void glGetProgramInfoLog(GLuint program, GLsizei bufSize, GLsizei * length, GLchar * infoLog)
{
    return glbinding::BindingES::GetProgramInfoLog(program, bufSize, length, infoLog);
}

} // namespace gles
