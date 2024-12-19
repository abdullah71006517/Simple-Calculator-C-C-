#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2, result;
    char operator;
    int choice;

    printf("************  Enhanced Basic Calculator  *************\n\n");
    printf("Welcome! This calculator supports addition, subtraction, multiplication, and division.\n\n");

    do {
        printf("Enter the first number: ");
        scanf("%lf", &num1);

        printf("Enter the operator (+, -, *, /): ");
        scanf(" %c", &operator);

        printf("Enter the second number: ");
        scanf("%lf", &num2);

        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("Result: %.2f\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %.2f\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %.2f\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            default:
                printf("Invalid operator. Please use +, -, *, or /.\n");
                break;
        }

        printf("\nDo you want to perform another calculation? (1 for Yes, 0 for No): ");
        scanf("%d", &choice);

    } while (choice == 1);

    printf("\nThank you for using the calculator. Goodbye!\n");
    return 0;
}
