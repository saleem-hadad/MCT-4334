//
// Created by Saleem Hadad on 19/09/2017.
//

#ifndef UNTITLED_QUADRATIC_H
#define UNTITLED_QUADRATIC_H

#include <cmath>

enum RootsType
{
    DUBLICATED,
    REAL,
    COMPLEX
};

class Quadratic {
private:
    double A;
    double B;
    double C;
    double roots[2] = {};
    RootsType rootsType;

    double calculateDiscriminant()
    {
        return pow(this->B, 2) - 4 * this->A * this->C;
    }

    void solve()
    {
        double discriminant = this->calculateDiscriminant();

        if (discriminant > 0)
        {
            this->rootsType = REAL;
            this->roots[0] = (((-this->B) - sqrt(discriminant)) / (2 * this->A));
            this->roots[1] = (((-this->B) + sqrt(discriminant)) / (2 * this->A));
        }
        else if (discriminant < 0)
        {
            this->rootsType = COMPLEX;
            this->roots[0] = (this->B / (2 * this->A)) * -1;
            this->roots[1] = sqrt(-discriminant) / (2 * this->A);
        }
        else
        {
            this->rootsType = DUBLICATED;
            this->roots[0] = (this->B / (2 * this->A)) * -1;
            this->roots[1] = (this->B / (2 * this->A)) * -1;
        }
    }

public:
    Quadratic(double A, double B, double C)
    {
        this->A = A;
        this->B = B;
        this->C = C;
    }

    void printRoots()
    {
        this->solve();

        if (this->rootsType == REAL)
        {
            printf("x1 = %f\nx2 = %f\n", this->roots[0], this->roots[1]);
        }
        else if (this->rootsType == COMPLEX)
        {
            printf ("x1 = %f + %fi\nx2 = %f - %fi\n", this->roots[0], this->roots[1], this->roots[0], this->roots[1]);
        }
        else
        {
            printf ("x1 = x2 = %f\n", this->roots[0]);
        }
    }
};

#endif //UNTITLED_QUADRATIC_H