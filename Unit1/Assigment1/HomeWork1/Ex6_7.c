#include <stdio.h>
int main()
{
    float num1 = 0,num2 = 0;
    printf("Enter the value of a : ");
    scanf("%f",&num1);
    printf("Enter the value of b : ");
    scanf("%f",&num2);
    num1 += num2;
    num2 =  num1 - num2;
    num1 = num1 - num2;
    printf("The value of a is : %f & The value of b is : %f",num1 , num2);
    return 0;
}