#include <stdio.h>
int main()
{
    char c = 0;
    printf("Enter a char : ");
    scanf("%c",&c);
    if((c > 65 && c < 90) || (c > 97 && c < 122))
    {
        printf("The character %c is alphabet",c);
    }
    else
        printf("The character %c is not alphabet",c);
    return 0;
}