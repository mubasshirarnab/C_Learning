#include<stdio.h>

int main()
{
    int i,n,max,mini,i_max=0,i_mini=0;
    printf("Enter the number of term: ");
    scanf("%d", &n);
    int array[n];



    for(i=0; i<n; i++){
        scanf("%d", &array[i]);
    }

    max=mini=array[0];

    for(i=0; i<n; i++){
        if(array[i]>max){
            max=array[i];
            i_max=i;
        }
        if(array[i]<mini){
            mini=array[i];
            i_mini=i;
        }
    }
    printf("Maximum:%d\tIndex:%d\n", max,i_max+1);
    printf("Manimum:%d\tIndex:%d\n", mini,i_mini+1);

    return 0;
}
