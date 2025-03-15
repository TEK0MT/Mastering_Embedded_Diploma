#include <stdio.h>
int main()
{
    float n = 0,fin = -1000000;
    int counter = 0;
    printf("Enetr three numbers : ");
    for(counter = 0;counter < 3;counter++){
        scanf("%f",&n);
        if(n > fin){
            fin = n;
        }
    }
    printf("The largest number is : %f",fin);
    return 0;
}