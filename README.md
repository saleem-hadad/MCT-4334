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

#### Q1
```c
/*
Write a class called "Blinky" that has four parameters (port, pin number, ON duration, OFF duration). 
- Make sure that the class is compatible with the code given in Example 9 of Week 04 slides. 
- Make sure that the class works with other ports and pin numbers.
*/
Blinky leds[8];

void setup()
{
  leds[0].initialize('D', 2, 781, 515);
  leds[1].initialize('D', 3, 2014, 1348);
  leds[2].initialize('D', 4, 343, 573);
  leds[3].initialize('D', 5, 678, 1839);
  leds[4].initialize('D', 6, 342, 534);
  leds[5].initialize('B', 0, 1478, 326);
  leds[6].initialize('B', 1, 1859, 351);
  leds[7].initialize('B', 2, 777, 888);

  for (;;)
  {
    for (int i=0; i<8; i++)
    {
      leds[i].refresh();
    }
  }
}
```

### Assignment 3

#### Q1
```c
/* 
Write a program to generate the following triangle signal using PWM at OC1A. 
Use sampling frequency of 90.91 Hz (90.91 samples per second)
*/
```

#### Q2
```c
/* 
Write a program to generate the following sinusoidal signal using PWM at OC2B. 
Use sampling frequency of 90.91 Hz (90.91 samples per second)
*/
```
### Assignment 4
#### Q1
```c
/*
<Using the internal EEPROM>
========= Lets start =========

Value at address 0 = 77 and value at address 1 = 88 and value at address 2 = 99

After erasing byte #0:
Value at address 0 = 255 and value at address 1 = 88 and value at address 2 = 99

After erasing everything:
Value at address 0 = 255 and value at address 1 = 255 and value at address 2 = 255

I am going to read the stored string character by character
Recovered text = HELLO

I am going to read the string using the ReadString function
Recovered text = HELLO

I am going to delete the string
Here is the aftermath (starting at memory address 2)
255
255
255
255
255
========= Done =========
*/
```

[Assignments]: #assignments
[A1]: #assignment-1
[A2]: #assignment-2
[A3]: #assignment-3
[A4]: #assignment-4
