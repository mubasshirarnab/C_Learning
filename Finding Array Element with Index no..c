#include<stdio.h>

int main()
{
    int i,n,value,flag=0;
    printf("Enter the number of term: ");
    scanf("%d", &n);
    int array[n];

    for(i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    printf("Enter the value to find: ");
    scanf("%d", &value);

    for(i=0; i<n; i++){
        if(array[i]==value){
            flag=1;
            printf("%d is found at %dth index\n", array[i],i+1);
        }
    }
    if(flag==0){
        printf("Not Found");
    }

    return 0;
}
