#include<stdio.h>

int main()
{
    int i,n,count=0;
    printf("Enter the number of term: ");
    scanf("%d", &n);
    char country[n];

    for(i=0; i<n; i++){
        scanf("%c", &country[i]);
        }
        country[i]='\0';
        printf("%s", country);
    }

