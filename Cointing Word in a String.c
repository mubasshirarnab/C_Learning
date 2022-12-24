#include<stdio.h>

int main()
{
    int i,count=0;
    char str[100];

    printf("Enter the string to check: ");
    scanf("%[^\n]s", str);

    for(i=0; str[i]!='\0'; i++){
        if(str[i]==' ' && str[i+1]!=' '){
            count++;
        }
    }
    printf("The number of word in the string is: %d\n", count+1);

    return 0;
}
