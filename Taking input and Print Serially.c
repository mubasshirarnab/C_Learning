#include<stdio.h>

int main()
{
    char c;

    while(1){
        scanf("%c", &c);
        if(c=='A'){
            break;
        }
        printf("%c\n",c);
    }

    return 0;
}
