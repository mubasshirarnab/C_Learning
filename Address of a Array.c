#include<stdio.h>

int main()
{
    int arra[5]={50,60,70,80,90};

    printf("Value of the Array: %d,%d,%d,%d,%d\n",arra[0],arra[1],arra[2],arra[3],arra[4]);

    printf("Address of arra=%p\n", &arra);
    printf("Address of arra[0]=%p\n", &arra[0]);
    printf("Address of arra[1]=%p\n", &arra[1]);
    printf("Address of arra[2]=%p\n", &arra[2]);
    printf("Address of arra[3]=%p\n", &arra[3]);
    printf("Address of arra[4]=%p\n", &arra[4]);

    return 0;
}
