#ifndef _Transform_h_
#define _Transform_h_

#include "Mesh.h"

class Transform
{
    void translate(Mesh &m, const Vector &v)
    {
        for(int i = 0; i<m.faceCount; i++)
        {
            for (int j = 0; j<m.faces[i].v_num; j++)
            {
                m.faces[i].vertices[j]+=v;
            }
        }
    }
}

#endif
