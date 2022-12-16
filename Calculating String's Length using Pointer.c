#include<stdio.h>

int main()
{
    char str[100]= "My name is Dogesh";
    char *ptr;

    ptr=str;

    int count=0;
    for(int i=0; ptr[i]!='\0'; i++){
        count++;
    }
    printf("The Length of the String is: %d", count);

    return 0;
}
