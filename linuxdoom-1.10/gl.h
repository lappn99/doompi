#ifndef __GL_H__
#define __GL_H__

#include <GL/gl.h>
#include <GL/glx.h>
typedef struct GL
{   
    
    PFNGLBINDBUFFERPROC                 BindBuffer;
    PFNGLGENBUFFERSPROC                 GenBuffers;
    PFNGLBUFFERDATAPROC                 BufferData;
    PFNGLBUFFERSUBDATAPROC              BufferSubData;
    PFNGLDRAWARRAYSEXTPROC              DrawArrays;
    PFNGLDRAWRANGEELEMENTSPROC          DrawRangeElements;
    PFNGLDRAWELEMENTSBASEVERTEXPROC     DrawElementsBaseVertex;
    PFNGLDRAWELEMENTSINDIRECTPROC       DrawElementsIndirect;
    PFNGLDRAWARRAYSINDIRECTPROC         DrawArraysIndirect;
    PFNGLENABLEVERTEXATTRIBARRAYPROC    EnableVertexAttribArray;
    PFNGLVERTEXATTRIBPOINTERPROC        VertexAttribPointer;
    PFNGLCREATESHADERPROC               CreateShader;
    PFNGLDELETESHADERPROC               DeleteShader;
    PFNGLLINKPROGRAMPROC                LinkProgram;
    PFNGLUSEPROGRAMPROC                 UseProgram;
    PFNGLATTACHSHADERPROC               AttachShader;
    PFNGLSHADERSOURCEPROC               ShaderSource;
    PFNGLCOMPILESHADERPROC              CompileShader;
    PFNGLCREATEPROGRAMPROC              CreateProgram;
    PFNGLGETSHADERIVPROC                GetShaderiv;
    PFNGLGETSHADERINFOLOGPROC           GetShaderInfoLog;
    PFNGLGETPROGRAMIVPROC               GetProgramiv;
    PFNGLGETSTRINGIPROC                 GetStringi;
    PFNGLUNIFORMMATRIX4FVPROC           UniformMatrix4fv;
    PFNGLGETUNIFORMLOCATIONPROC         GetUniformLocation;
    PFNGLGENVERTEXARRAYSPROC            GenVertexArrays;
    PFNGLBINDVERTEXARRAYPROC            BindVertexArray;


} GL;

extern GL gl;

void GL_LoadFuncs();
#endif