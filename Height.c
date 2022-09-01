#include <stdio.h>

int main()
{
    float Height;

    printf("Input the height of the person (in centimetres) :");
    scanf("%f", &Height);
    if (Height < 150.0){
        printf("The person is Dwarf. \n");
    }
    else if ((Height >= 150.0) && (Height < 165.0)){
        printf("The person is  average Heighted. \n");
    }
    else if ((Height >= 165.0) && (Height <= 195.0)){
        printf("The person is Taller. \n");
    }
    else{
        printf("Abnormal Height.\n");
    }

    return 0;
}
