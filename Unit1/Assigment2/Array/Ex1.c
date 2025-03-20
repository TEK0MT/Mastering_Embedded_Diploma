#include <Stdio.h>

int main()
{
    float arr1[2][2];
    float arr2[2][2];
    float arrSum[2][2];
    int rows = 0;
    int coloumns =0;
    for(rows = 0 ; rows < 2;rows++){
        for(coloumns = 0;coloumns < 2;coloumns++){
            printf("Please enter the array1[%d]{%d}",rows,coloumns);
            scanf("%f",&(arr1[rows][coloumns]));
            fflush(stdin);fflush(stdout);
        }
    }
    for(rows = 0 ; rows < 2;rows++){
        for(coloumns = 0;coloumns < 2;coloumns++){
            printf("Please enter the array2[%d]{%d}",rows,coloumns);
            scanf("%f",&(arr2[rows][coloumns]));
            fflush(stdin);fflush(stdout);
        }
    }

    for(rows = 0 ; rows < 2;rows++){
        for(coloumns = 0;coloumns < 2;coloumns++){
            arrSum[rows][coloumns] = arr1[rows][coloumns] + arr2[rows][coloumns];
        }
    }
    printf("The sum of the two arrays is : \n");
    for(rows = 0 ; rows < 2;rows++){
        for(coloumns = 0;coloumns < 2;coloumns++){
            printf("%0.1f \t",arrSum[rows][coloumns]);
        }
        printf("\n");
    }
    return 0;
}