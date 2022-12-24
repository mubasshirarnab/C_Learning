#include<stdio.h>

int main()
{
    int i, count=0;
    char str[100];

    printf("Enter the String to check: ");
    scanf("%[^\n]s", str);
    printf("%s", str);

    for(i=0; str[i]!='\0'; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
           str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            count++;
           }
    }
    printf("\nThe number of vowel in the String is: %d\n", count);

    return 0;
}
