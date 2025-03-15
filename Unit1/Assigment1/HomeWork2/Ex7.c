#include <stdio.h>
int main()
{
    int sum = 1;
    int choice = 0,counter = 0;
    printf("Enter the number : ");
    scanf("%d",&choice);
    if(choice < 0)
        printf("Invalid number");
    for(counter = 1;counter <= choice;counter++)
        sum *= counter;

    printf("Sum is : %d",sum);
    return 0;
}