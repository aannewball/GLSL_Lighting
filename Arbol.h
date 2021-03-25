#include <GL/glew.h>
#include <GL/freeglut.h>
#include "glApplication.h"
#include "glutWindow.h"
#include "glsl.h"
#include "glm/glm.h"
#define NUM_MALLAS 2

#pragma once
class Arbol
{
	GLMmodel* objmodel_ptr[NUM_MALLAS];

	public: 
		Arbol();

		void DibujarArbol(int i, float aX, float aY, float aZ); 

		~Arbol();
};

