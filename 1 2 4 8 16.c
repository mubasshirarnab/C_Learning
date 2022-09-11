#include<stdio.h>

int main()
{
    int i,n,m;
    int count=0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        m=pow(2,i);
        printf("%d ", m);
        count++;
    }

    return 0;
}
