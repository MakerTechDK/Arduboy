#ifndef VECTOR_HPP
#define VECTOR_HPP

struct Vector{
    int x, y;
    Vector(int _x, int _y) : x(_x), y(_y){}

    void operator +=(Vector other);
};

bool operator!=(Vector v1, Vector v2);

using Position = Vector;
using Direction = Vector;

#endif
