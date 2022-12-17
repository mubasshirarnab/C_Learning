#include<stdio.h>

int main()
int main()
{
    char str[100]="Univarsity Life";
    printf("%s\n", str);
    char *ptr;

    ptr=str;

    int vowel=0,consonant=0;
    for(int i=0; ptr[i]!='\0'; i++){
        if(ptr[i]=='A' || ptr[i]=='E' ||ptr[i]=='I' || ptr[i]=='O' ||
             ptr[i]=='U' || ptr[i]=='a' ||ptr[i]=='e' || ptr[i]=='i' ||
             ptr[i]=='o' || ptr[i]=='u'){

                vowel++;
        }
        else if(ptr[i]==' '){
            continue;
        }
        else{
            consonant++;
        }
    }
    printf("The number of vowel is: %d\nThe number of consonant is: %d", vowel,consonant);

    return 0;
}
