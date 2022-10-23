#include<stdio.h>
#include<string.h>

int main()
{
    char s[80], reverse_word[80];
    int i,j, length;

    scanf("%s", s);
    length=strlen(s);

    for(j=0,i=length-1; j<length;j++,i--){
        reverse_word[j]=s[i];
    }
    reverse_word[j]='\0';
    printf("%s\n", reverse_word);

    if(0==strcmp(s,reverse_word)){
        printf("%s is a Palindrome", s);
    }
    else{
        printf("%s is not a Palindrome", s);
    }

    return 0;
}
