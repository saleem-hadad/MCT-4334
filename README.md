# MCT-4334 EMBEDDED SYSTEM DESIGN


## Contents

* [Assignments]
  + [A1]
	+ [A2]
	+ [A3]
	+ [A4]
	
## Assignments

### Assignment 1

#### Q1 

```c
/*
Write a program that asks for an 8-bit number from the user.
 - If the number is -1, exit the program.
 - Print out "GOOD" , if the total number of 1's in the 8-bit number is even.
 - Print out "BAD", if the total number of 1's in the 8-bit number is odd.
 - Repeat the process until the user enters -1. 
*/

int main()
{
    int number;
    number = input();

    while(number != -1)
    {
        char counter = countOnesInBinaryForm(number);
        printf("%s", isEven(counter) ? "GOOD\n" : "BAD\n");
        number = input();
    }

    return 0;
}
```

#### Q2

```c

// Extend the vector class shown in slide #58 such that the following code runs successfully

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
```

#### Q3

```c
// Write a Quadratic class such that the following code runs successfully
// It must handle complex roots.

int main()
{
	Quadratic quadratic(2, 3, 4);
	quadratic.printRoots();

	return 0;
}
```

### Assignment 2
### Assignment 3
### Assignment 4

[Assignments]: #assignments
[A1]: #assignment-1
[A2]: #assignment-2
[A3]: #assignment-3
[A4]: #assignment-4