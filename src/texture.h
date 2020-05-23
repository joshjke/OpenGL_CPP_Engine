#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <GL/glew.h>

#include <GLFW/glfw3.h>

class texture
{
public:
	static GLuint loadBMP_custom(const char* imagepath);
	static GLuint loadDDS(const char* imagepath);
};

