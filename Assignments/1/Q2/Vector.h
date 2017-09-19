//
// Created by Saleem Hadad on 19/09/2017.
// Q2: Extend the vector class shown in slide #58
//

#ifndef UNTITLED_VECTOR_H
#define UNTITLED_VECTOR_H

#include <cmath>

class Vector {
private:
    double x;
    double y;
    double z;
public:
    Vector(double x, double y, double z)
    {
        this->x = x;
        this->y = y;
        this->z = z;
    }

    Vector add(Vector vector)
    {
        return Vector(
                this->x + vector.x,
                this->y + vector.y,
                this->z + vector.z
        );
    }

    double getMagnitude()
    {
        return sqrt(
                (this->x * this->x) + (this->y * this->y) + (this->z * this->z)
        );
    }

    Vector crossProduct(Vector vector)
    {
        return Vector(
                ((this->y * vector.z) - (this->z * vector.y)),
                ((this->z * vector.x) - (this->x * vector.z)),
                ((this->x * vector.y) - (this->y * vector.x))
        );
    }

    double dotProduct(Vector vector)
    {
    	double result = (this->x * vector.x) + (this->y * vector.y) + (this->z * vector.z);
        return result;
    }

    void print()
    {
        printf("x = %f y = %f z = %f\n", this->x, this->y, this->z);
    }
};

#endif //UNTITLED_VECTOR_H
