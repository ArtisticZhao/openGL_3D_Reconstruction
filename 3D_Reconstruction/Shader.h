#pragma once

#include <string>
#include <fstream>
#include <sstream>
#include <iostream>

#include <GL/glew.h>; // ����glew����ȡ���еı���OpenGLͷ�ļ�

class Shader
{
public:
	// ����ID
	GLuint Program;
	// ��������ȡ��������ɫ��
	Shader(const GLchar* vertexPath, const GLchar* fragmentPath);
	// ʹ�ó���
	void Use();
};

