#include "i_system.h"
#include "gl.h"

GL gl;

void GL_LoadFuncs(void) 
{
    #define REGISTER_GL_FUNC( FUNC ) if((gl.FUNC=glXGetProcAddress((const GLubyte*)"gl"#FUNC)) == NULL){I_Error("Could not load GL func: " #FUNC);}

    REGISTER_GL_FUNC(BindBuffer);
    REGISTER_GL_FUNC(GenBuffers);
    REGISTER_GL_FUNC(BufferData);
    REGISTER_GL_FUNC(BufferSubData);
    REGISTER_GL_FUNC(DrawArrays);
    REGISTER_GL_FUNC(EnableVertexAttribArray);
    REGISTER_GL_FUNC(VertexAttribPointer);
    REGISTER_GL_FUNC(VertexAttribPointer);
    REGISTER_GL_FUNC(CreateShader);
    REGISTER_GL_FUNC(LinkProgram);
    REGISTER_GL_FUNC(UseProgram);
    REGISTER_GL_FUNC(AttachShader);
    REGISTER_GL_FUNC(ShaderSource);
    REGISTER_GL_FUNC(CreateProgram);
    REGISTER_GL_FUNC(DeleteShader);
    REGISTER_GL_FUNC(CompileShader);
    REGISTER_GL_FUNC(GetShaderiv);
    REGISTER_GL_FUNC(GetProgramiv);
    REGISTER_GL_FUNC(GetStringi);
    REGISTER_GL_FUNC(GetShaderInfoLog);
    REGISTER_GL_FUNC(GetUniformLocation);
    REGISTER_GL_FUNC(UniformMatrix4fv);
    REGISTER_GL_FUNC(GenVertexArrays);
    REGISTER_GL_FUNC(BindVertexArray);
    REGISTER_GL_FUNC(DrawRangeElements);
    REGISTER_GL_FUNC(DrawElementsBaseVertex);


}