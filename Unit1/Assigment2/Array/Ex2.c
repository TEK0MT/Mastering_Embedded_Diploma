#include <stdio.h>
int main()
{
    int size = 0;
    printf("Enter the size : ");
    scanf("%d",&size);
    float arr[size];
    int counter = 0;
    float sum = 0;
    for(counter = 0;counter < size;counter++){
        printf("Enter the number arr[%d]",counter);
        scanf("%f",&arr[counter]);
    }

    for(counter = 0;counter < size;counter++){
        sum += arr[counter];
    }

    printf("The average is : %f",sum / size);
    return 0;
}