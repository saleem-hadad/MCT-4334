/**
Q: Write a program that asks for an 8-bit number from the user. If the number is -1, exit the program.

Print out "GOOD" , if the total number of 1's in the 8-bit number is even.
Print out "BAD", if the total number of 1's in the 8-bit number is odd.
Repeat the process until the user enters -1.
*/

#include <stdio.h>
#define CHAR_BITS 8

char countOnesInBinaryForm(char number)
{
    char counter = 0;

    for (char i = 0; i < CHAR_BITS; i++)
    {
        int bit = (number >> i) & 1;
        (bit == 1) ? counter++ : 0;
    }

    return counter;
}

char isEven(char number)
{
    return ! (number % 2);
}

int askForInput()
{
    int number = 0;

    printf("Please enter a number: ");
    scanf("%d", &number);

    return number;
}

int main()
{
    int number;
    number = askForInput();

    while(number != -1)
    {
        char counter = countOnesInBinaryForm(number);
        printf("%s", isEven(counter) ? "GOOD\n" : "BAD\n");
        number = askForInput();
    }

    return 0;
}