#include <stdio.h>
int main()
{
    int num1 = 0,num2 = 0;
    char operation;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &operation);

    switch (operation)
    {
        case '+':
            printf("Result: %d\n", num1 + num2);
            break;
        case '-':
            printf("Result: %d\n", num1 - num2);
            break;
        case '*':
            printf("Result: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2f\n", (float)num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Error: Invalid operation.\n");
    }
    return 0;
}