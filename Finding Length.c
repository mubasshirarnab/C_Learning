#include<stdio.h>

int main()
{
    char name[]={"Abc 123 7&*&*"};
    int i,length=0;

    for(i=0; name[i]!='\0'; i++){
        length++;
    }
    printf("%d",length);
}
