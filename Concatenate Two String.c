#include<stdio.h>

int main()
{
    char string1[]={"My name "};
    char string2[]={"is Andy"}, string3[100];
    int i,j,length1=8, length2=7;

    for(i=0,j=0; i<length1; i++,j++){
        string3[j]=string1[i];
    }
    for(i=0; i<length2; i++,j++){
        string3[j]=string2[i];
    }
    string3[j]='\0';

    printf("Output: %s", string3);

    return 0;
}
