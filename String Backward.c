#include<stdio.h>
#include<string.h>

int main()
{
    char word[100],reverse_word[100];
    int i, j, length;

    gets(word);
    length=strlen(word);

    for(j=0,i=length-1; j<length; j++,i--){
        reverse_word[j]=word[i];
        printf("%c", reverse_word[j]);
    }

    return 0;
}
