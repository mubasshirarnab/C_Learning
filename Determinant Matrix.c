#include<stdio.h>

int main()
{
    int i,j,determinant=0;
    int array[3][3];

    printf("Enter the elements in the Matrix: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Element- [%d] [%d]: ", i,j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("\nThe Matrix: \n");
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%4d", array[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<3; i++){
        determinant= determinant + (array[0][i]*(array[1][(i+1)%3]*array[2][(i+2)%3] - array[1][(i+2)%3]*array[2][(i+1)%3]));
    }
    printf("The Determinant of the Matrix: %d\n", determinant);

    return 0;
}
