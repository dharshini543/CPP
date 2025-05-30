#ifndef VERTEX_H
#define VERTEX_H

struct Vertex
{
    float m_x, m_y, m_z;
    Vertex(float x,float y,float z);


    Vertex(const Vertex& vertex);

    ~Vertex();

};

#endif // VERTEX_H
