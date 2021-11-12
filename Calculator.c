#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;

    printf("************  Basic Calculator written in C/C++ Language  ************* \n\n");
    /* Made by Abraar */

    printf("Hello, \n");
    printf("Enter the first number below : \n"); // Just choose any number (Decimal allowed)
    scanf("%lf", &num1); // This will store the first number given by the user

    printf("Enter the second number : \n");
    scanf("%lf", &num2); // This will store the second number given by the user

    printf("\n\nYour Answer is : %f :D \n", num1 + num2); // (num1 + num2) = Addition
                                                     // Basically, This will calculate the inputs given by the user



    return 0;
}
