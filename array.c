#include<stdio.h>

int main()
{
    int arra[10]={10,20,30,40,50,60,70,80,90,100};
    int arra2[10];
    int i,j;

    for(i=0,j=9;i<=10;i++,j--){
        arra2[j]=arra[i];
    }
    for(i=0;i<10;i++){
        arra[i]=arra2[i];
    }
    for(i=0;i<10;i++){
        printf("%d\n", arra[i]);
    }

    return 0;
}
