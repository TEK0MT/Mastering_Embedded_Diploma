#include <Stdio.h>

int main()
{
    int r = 2;
    int c = 3;
    float arr[r][c];
    float TransporeArr[c][r];
    
    int rows = 0;
    int coloumns =0;
    for(rows = 0 ; rows < r;rows++){
        for(coloumns = 0;coloumns < c;coloumns++){
            printf("Please enter the array1[%d]{%d}",rows,coloumns);
            scanf("%f",&(arr[rows][coloumns]));
            fflush(stdin);fflush(stdout);
        }
    }
    for(rows = 0 ; rows < r;rows++){
        for(coloumns = 0;coloumns < c;coloumns++){
            TransporeArr[coloumns][rows] = arr[rows][coloumns];
        }
    }

    printf("You entered : \n");

    for(rows = 0 ; rows < r;rows++){
        for(coloumns = 0;coloumns < c;coloumns++){
            printf("%0.1f \t",arr[rows][coloumns]);
        }
        printf("\n");
    }

    printf("Transpore array : \n");

    for(rows = 0 ; rows < c;rows++){
        for(coloumns = 0;coloumns < r;coloumns++){
            printf("%0.1f \t",TransporeArr[rows][coloumns]);
        }
        printf("\n");
    }
    return 0;
}