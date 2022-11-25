#include<stdio.h>

int main()
{
    int i,n,count=0;
    printf("Enter the number of term: ");
    scanf("%d", &n);
    char array[n];

    for(i=0; i<n; i++){
        scanf("%c", &array[i]);
        if(array[i]=='a'||array[i]=='e'||array[i]=='i'||array[i]=='o'||array[i]=='u'||
           array[i]=='A'||array[i]=='E'||array[i]=='I'||array[i]=='O'||array[i]=='U'){
           count=count+1;
           }
    }
    printf("The number of Vowels: %d\n", count);

    return 0;
}
