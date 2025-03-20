#include <stdio.h>
#include <string.h>
int main()  
{
    char str[100];
    char c;
    int freq = 0;
    int counter = 0;
    printf("Enter a string : ");
    gets(str);
    printf("Enter character to find frquency : ");
    scanf("%c",&c);
    for(counter = 0;counter < strlen(str);counter++){
        if(str[counter] == c){
            freq++;
        }
    }
    printf("Frequency of %c is : %d",c,freq);
    return 0;
}