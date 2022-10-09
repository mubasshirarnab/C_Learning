#include<stdio.h>>

int main()
{
    int array[]={1,4,6,8,9,11,14,15,20,25,33,83,87,97,99,100};
    int low_index=0;
    int high_index=15;
    int mid_index;
    int num=97;

    while(1){
        mid_index=(high_index+low_index)/2;

        if(num==array[mid_index]){
            break;
        }
        if(num<array[mid_index]){
            high_index=mid_index-1;
        }
        else{
            low_index=mid_index+1;
        }
    }
    printf("%d is found in the Array. It is the %d th element of the Array.\n", array[mid_index], mid_index);

    return 0;
}
