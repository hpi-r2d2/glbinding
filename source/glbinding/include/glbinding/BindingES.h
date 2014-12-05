#pragma once

#include <array>
#include <vector>

#include <glbinding/glbinding_api.h>

#include <glbinding/gles/types.h>

#include <glbinding/ContextHandle.h>
#include <glbinding/Function.h>


namespace glbinding
{

class GLBINDING_API BindingES
{
public:
    BindingES() = delete;

    static void initialize(bool resolveFunctions = true);
    static void initialize(ContextHandle context, bool useContext = true, bool resolveFunctions = true);
    
    static void registerAdditionalFunction(AbstractFunction * function);

    static void resolveFunctions();

    static void useCurrentContext();
    static void useContext(ContextHandle context);

    static void releaseCurrentContext();
    static void releaseContext(ContextHandle context);

    static size_t size();

    using array_t = std::array<AbstractFunction *, 36>;

    static const array_t & functions();
    static const std::vector<AbstractFunction *> & additionalFunctions();

public:
    static Function<gles::GLuint, gles::GLenum> CreateShader;
    static Function<void, gles::GLuint, gles::GLsizei, const gles::GLchar *const*, const gles::GLint *> ShaderSource;
    static Function<void, gles::GLuint> CompileShader;
    static Function<gles::GLuint> CreateProgram;
    static Function<void, gles::GLuint, gles::GLuint> AttachShader;
    static Function<void, gles::GLuint> LinkProgram;
    static Function<void, gles::GLsizei, gles::GLuint *> GenTextures;
    static Function<void, gles::GLuint, gles::GLsizei, const gles::GLuint *> BindTextures;
    static Function<void, gles::GLenum, gles::GLenum, gles::GLint> TexParameteri;
    static Function<void, gles::GLenum, gles::GLuint> BindTexture;
    static Function<void, gles::GLenum, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei, gles::GLint, gles::GLenum, gles::GLenum, const void *> TexImage2D;
    static Function<void, gles::GLsizei, gles::GLuint *> GenVertexArrays;
    static Function<void, gles::GLuint> BindVertexArray;
    static Function<void, gles::GLsizei, gles::GLuint *> GenBuffers;
    static Function<void, gles::GLenum, gles::GLuint> BindBuffer;
    static Function<void, gles::GLenum, gles::GLsizeiptr, const void *, gles::GLenum> BufferData;
    static Function<gles::GLint, gles::GLuint, const gles::GLchar *> GetAttribLocation;
    static Function<void, gles::GLuint> EnableVertexAttribArray;
    static Function<void, gles::GLuint, gles::GLint, gles::GLenum, gles::GLboolean, gles::GLsizei, const void *> VertexAttribPointer;
    static Function<gles::GLint, gles::GLuint, const gles::GLchar *> GetUniformLocation;
    static Function<void, gles::GLenum> Enable;
    static Function<void, gles::GLfloat, gles::GLfloat, gles::GLfloat, gles::GLfloat> ClearColor;
    static Function<void, gles::GLuint> UseProgram;
    static Function<void, gles::GLenum> ActiveTexture;
    static Function<void, gles::GLint, gles::GLint> Uniform1i;
    static Function<void, gles::GLsizei, const gles::GLuint *> DeleteBuffers;
    static Function<void, gles::GLuint> DeleteProgram;
    static Function<void, gles::GLint, gles::GLint, gles::GLsizei, gles::GLsizei> Viewport;
    static Function<void, gles::ClearBufferMask> Clear;
    static Function<void, gles::GLint, gles::GLsizei, gles::GLboolean, const gles::GLfloat *> UniformMatrix4fv;
    static Function<void, gles::GLint, gles::GLfloat> Uniform1f;
    static Function<void, gles::GLenum, gles::GLsizei, gles::GLenum, const void *, gl::GLsizei> DrawElementsInstanced;
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint *> GetShaderiv;
    static Function<void, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLchar *> GetShaderInfoLog;
    static Function<void, gles::GLuint, gles::GLenum, gles::GLint *> GetProgramiv;
    static Function<void, gles::GLuint, gles::GLsizei, gles::GLsizei *, gles::GLchar *> GetProgramInfoLog;
protected:
    static const array_t s_functions;
    static std::vector<AbstractFunction *> s_additionalFunctions;
};

} // namespace glbinding
