#include <stdio.h>
int main()
{
    int n = 0;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n > 0){
        printf("The number is positive");
    }
    else if(n < 0){
        printf("The number is negative");
    }
    else{
        printf("The number is zero");
    }
    return 0;
}