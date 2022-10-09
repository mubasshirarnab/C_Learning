#include<stdio.h>

int main()
{
    int array[]={1,4,5,6,8,9,10,15,20,25,33,83,87,97,99,100};
    int high_indx=15;
    int low_indx=0;
    int mid_indx;
    int num=90;

    while(low_indx<=high_indx){
        mid_indx=(low_indx+high_indx)/2;

        if(num==array[mid_indx]){
            break;
        }
        if(num<array[mid_indx]){
            high_indx=mid_indx-1;
        }
        else{
            low_indx=mid_indx+1;
        }
    }
    if(low_indx>high_indx){
        printf("The element is not in the Array.\n");
    }
    else{
        printf("%d is in the Array. It is the %dth element of the Array.\n", array[mid_indx], mid_indx);
    }

    return 0;
}
