#include <stdio.h>
#include <string.h>
int main()  
{
    char str[100];
    char reverse[100];
    int counter = 0;
    int size = 0;
    printf("Enter a string : ");
    gets(str);
    for(counter = 0;counter < strlen(str);counter++){
        reverse[counter] = str[strlen(str) - 1 - counter];
    }
    reverse[strlen(str)] = '\0';
    printf("Reverse string is :  %s",reverse);
    return 0;
}