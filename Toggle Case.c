#include<stdio.h>

int main()
{
    char str[100];
    printf("Enter the the string to convert: ");
    scanf("%[^\n]s", str);

    for(int i=0; str[i]!='\0'; i++){
        if(str[i]>='a' && str[i]<='z'){
            str[i]= 'A' + (str[i]-'a');
        }
        else if(str[i]>='A' && str[i]<='Z'){
            str[i]= 'a' + (str[i]-'A');
        }
           printf("%c", str[i]);
    }

    return 0;
}
