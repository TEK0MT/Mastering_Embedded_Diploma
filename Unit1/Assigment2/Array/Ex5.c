#include <stdio.h>
int main()
{
    int data = 0;
    int index = 0;
    int counter = 0;
    int size = 0;
    printf("Enter the size : ");
    scanf("%d",&size);
    int arr[size];
    


    for(counter = 0;counter < size;counter++){
        printf("Enter the number arr[%d] : ",counter);
        scanf("%d",&arr[counter]);
        fflush(stdout);fflush(stdin);
    }

    printf("Enter the number U want to search : ");
    scanf("%d",&data);

    for(counter = 0;counter <= size;counter++)
    {
        if(arr[counter] == data){
            index = counter;
            break;
        }
    }

    printf("The number U are searching for is at %d",index + 1);
    return 0;
}