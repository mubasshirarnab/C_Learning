#include<stdio.h>

int main()
{
    char a;
    scanf("%c", &a);

    if(a>='0' && a<='9'){
        printf("Digit\n");
        if(a>'5'){
            printf("Greater");
        }
        else{
            printf("Smaller");
        }
    }
    else if(a>='A' && a<='Z' || a>='a' && a<='z'){
        printf("Alphabet\n");
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else{
        printf("Sign");
    }

    return 0;
}
