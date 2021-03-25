#include "Arbol.h"
#define NumSeg 5

Arbol::Arbol()
{
    for (int i = 0; i < NUM_MALLAS; i++)
    {
        objmodel_ptr[i] = NULL;
    }

    for (int i = 0; i < NUM_MALLAS; i++)
    {
        if (!objmodel_ptr[i])
        {
            switch (i)
            {
            case 0:
                objmodel_ptr[i] = glmReadOBJ("./Mallas/mica.obj");
                break;
            case 1:
                objmodel_ptr[i] = glmReadOBJ("./Mallas/dragon.obj");
                break;
            }
            if (!objmodel_ptr[i])
                exit(0);

            glmUnitize(objmodel_ptr[i]);
            glmFacetNormals(objmodel_ptr[i]);
            glmVertexNormals(objmodel_ptr[i], 90.0);
        }

    }

}
void Arbol::DibujarArbol(int i, float aX, float aY, float aZ)
{
	glPushMatrix();

    glTranslatef(aX, aY, aZ);
    glmDraw(objmodel_ptr[i], GLM_SMOOTH | GLM_MATERIAL);

	glPopMatrix();
}
Arbol::~Arbol()
{
    for (int i = 0; i < NUM_MALLAS; i++)
    {
        objmodel_ptr[i] = NULL;
    }
}
