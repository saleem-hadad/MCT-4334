#include <stdio.h>
#include "Vector.h"

int main()
{
    Vector vector1(3.5, 4, 2);
    Vector vector2(2.5, 9.3, 3.4);

    Vector vector3 = vector1.add(vector2);
    vector3.print();

    Vector vector4 = vector2.crossProduct(vector3);
    vector4.print();

    double result = vector4.dotProduct(vector2);

    printf("result = %f", result);

    return 0;
}