#version 330 core  // OpenGL version and profile specification

layout (location = 0) in vec3 aPos;  // Input attribute: Vertex position

//uniform mat4 transform;

void main()
{
    // Set the transformed vertex position
    //gl_Position = transform * vec4(aPos, 1.0f);
    gl_Position = vec4(aPos, 1.0f);
}
