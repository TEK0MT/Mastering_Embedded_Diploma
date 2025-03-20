#include <stdio.h>
int main()  
{
    char str[100];
    int counter = 0;
    int size = 0;
    printf("Enter a string : ");
    gets(str);
    for(counter = 0;str[counter] != '\0';counter++){
        size++;
    }
    printf("The size of the string is : %d",size);
    return 0;
}