#include <stdio.h>
int main()
{
    char c = 0;
    printf("Enter a character : ");
    scanf("%c",&c);
    switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("The character is vowel");
        break;
        default:
        printf("The character is constant");
    }
    return 0;
}