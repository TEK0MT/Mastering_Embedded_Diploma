#include <stdio.h>
int main()
{
    int num = 0;
    printf("Enter the number U want to check : ");
    scanf("%d",&num);
    if(num % 2 == 0)
        printf("The number %d is even",num);
    else
        printf("The number %d is odd",num);
    return 0;
}