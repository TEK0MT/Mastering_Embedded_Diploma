#include <stdio.h>
int main()
{
    int data = 0;
    int index = 0;
    int counter = 0;
    int size = 0;
    printf("Enter the size : ");
    scanf("%d",&size);
    int arr[size + 1];
    


    for(counter = 0;counter < size;counter++){
        printf("Enter the number arr[%d] : ",counter);
        scanf("%d",&arr[counter]);
        fflush(stdout);fflush(stdin);
    }

    printf("Enter the number U want to add : ");
    scanf("%d",&data);
    printf("Enter the index U want to add at : ");
    scanf("%d",&index);

    for(counter = size;counter >= index;counter--){
        arr[counter] = arr[counter - 1];
    }
    arr[index - 1] = data;

    for(counter = 0;counter <= size;counter++)
    {
        printf("%d ",arr[counter]);
    }
    return 0;
}