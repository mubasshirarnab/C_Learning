#include<stdio.h>

int main()
{
    char A[]={'B','a','n','g','l','a','d','e','s','h','\0'};
    printf("%s\n", A);
    int length;

    length=strlen(A);

    printf("The length of the String is: %d", length);

    return 0;
}
