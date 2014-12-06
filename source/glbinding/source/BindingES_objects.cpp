#include <glbinding/BindingES.h>

#include <glbinding/gles/bitfield.h>
#include <glbinding/gles/boolean.h>
#include <glbinding/gles/enum.h>
#include <glbinding/gles/values.h>


using namespace gles; // ToDo: multiple APIs?

namespace glbinding 
{

Function<gles::GLenum> BindingES::GetError("glGetError");
Function<gles::GLuint, gles::GLenum> BindingES::CreateShader("glCreateShader");
Function<void, gles::GLuint, gles::GLsizei, const gles::GLchar *const*, const gles::GLint *> BindingES::ShaderSource("glShaderSource");
Function<void, gles::GLuint> BindingES::CompileShader("glCompileShader");
Function<gles::GLuint> BindingES::CreateProgram("glCreateProgram");
Function<void, gles::GLuint, gles::GLuint> BindingES::AttachShader("glAttachShader");
Function<void, gles::GLuint> BindingES::LinkProgram("glLinkProgram");
Function<void, gles::GLsizei, gles::GLuint *> BindingES::GenTextures("glGenTextures");
Function<void, gles::GLenum, gles::GLenum, gles::GLint> BindingES::TexParameteri("glTexParameteri");
Function<void, gles::GLenum, gles::GLuint> BindingES::BindTexture("glBindTexture");
Function<void, gles::GLenum, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei, gles::GLint, gles::GLenum, gles::GLenum, const void *> BindingES::TexImage2D("glTexImage2D");
Function<void, gles::GLsizei, gles::GLuint *> BindingES::GenVertexArrays("glGenVertexArrays");
Function<void, gles::GLuint> BindingES::BindVertexArray("glBindVertexArray");
Function<void, gles::GLsizei, gles::GLuint *> BindingES::GenBuffers("glGenBuffers");
Function<void, gles::GLenum, gles::GLuint> BindingES::BindBuffer("glBindBuffer");
Function<void, gles::GLenum, gles::GLsizeiptr, const void *, gles::GLenum> BindingES::BufferData("glBufferData");
Function<gles::GLint, gles::GLuint, const gles::GLchar *> BindingES::GetAttribLocation("glGetAttribLocation");
Function<void, gles::GLuint> BindingES::EnableVertexAttribArray("glEnableVertexAttribArray");
Function<void, gles::GLuint, gles::GLint, gles::GLenum, gles::GLboolean, gles::GLsizei, const void *> BindingES::VertexAttribPointer("glVertexAttribPointer");
Function<gles::GLint, gles::GLuint, const gles::GLchar *> BindingES::GetUniformLocation("glGetUniformLocation");
Function<void, gles::GLenum> BindingES::Enable("glEnable");
Function<void, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat> BindingES::ClearColor("glClearColor");
Function<void, gles::GLuint> BindingES::UseProgram("glUseProgram");
Function<void, gles::GLenum> BindingES::ActiveTexture("glActiveTexture");
Function<void, gles::GLint, gles::GLint> BindingES::Uniform1i("glUniform1i");
Function<void, gles::GLsizei, const gles::GLuint *> BindingES::DeleteBuffers("glDeleteBuffers");
Function<void, gles::GLuint> BindingES::DeleteProgram("glDeleteProgram");
Function<void, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei> BindingES::Viewport("glViewport");
Function<void, gles::ClearBufferMask> BindingES::Clear("glClear");
Function<void, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> BindingES::UniformMatrix4fv("glUniformMatrix4fv");
Function<void, gles::GLint, gles::GLfloat> BindingES::Uniform1f("glUniform1f");
Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, const void *, gl::GLsizei> BindingES::DrawElementsInstanced("glDrawElementsInstanced");
Function<void, gles::GLuint, gles::GLenum, gles::GLint *> BindingES::GetShaderiv("glGetShaderiv");
Function<void, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLchar *> BindingES::GetShaderInfoLog("glGetShaderInfoLog");
Function<void, gles::GLuint, gles::GLenum, gles::GLint *> BindingES::GetProgramiv("glGetProgramiv");
Function<void, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLchar *> BindingES::GetProgramInfoLog("glGetProgramInfoLog");

const BindingES::array_t BindingES::s_functions = {{
    &BindingES::GetError,
    &BindingES::CreateShader,
    &BindingES::ShaderSource,
    &BindingES::CompileShader,
    &BindingES::CreateProgram,
    &BindingES::AttachShader,
    &BindingES::LinkProgram,
    &BindingES::GenTextures,
    &BindingES::TexParameteri,
    &BindingES::BindTexture,
    &BindingES::TexImage2D,
    &BindingES::GenVertexArrays,
    &BindingES::BindVertexArray,
    &BindingES::GenBuffers,
    &BindingES::BindBuffer,
    &BindingES::BufferData,
    &BindingES::GetAttribLocation,
    &BindingES::EnableVertexAttribArray,
    &BindingES::VertexAttribPointer,
    &BindingES::GetUniformLocation,
    &BindingES::Enable,
    &BindingES::ClearColor,
    &BindingES::UseProgram,
    &BindingES::ActiveTexture,
    &BindingES::Uniform1i,
    &BindingES::DeleteBuffers,
    &BindingES::DeleteProgram,
    &BindingES::Viewport,
    &BindingES::Clear,
    &BindingES::UniformMatrix4fv,
    &BindingES::Uniform1f,
    &BindingES::DrawElementsInstanced,
    &BindingES::GetShaderiv,
    &BindingES::GetShaderInfoLog,
    &BindingES::GetProgramiv,
    &BindingES::GetProgramInfoLog
}};

} // namespace glbinding
