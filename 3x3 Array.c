#include<stdio.h>

int main()
{
    int row,column;
    int array[3][3];

    for(row=0; row<3; row++){
        for(column=0; column<3; column++){
            scanf("%d", &array[row][column]);
        }
    }
    for(row=0; row<3; row++){
        for(column=0; column<3; column++){
            printf("%d ", array[row][column]);
        }
        printf("\n");
    }

    return 0;
}
