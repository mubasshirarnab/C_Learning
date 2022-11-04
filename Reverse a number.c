#include<stdio.h>

int reverse(int num)
{
    int rem, rev=0;

    while(num!=0){
        rem=num%10;
        num=num/10;
        rev=(rev*10)+rem;
    }
    return rev;
}
int main()
{
    int num,rem;
    printf("Enter a number: ");
    scanf("%d", &num);

    int rev=reverse(num);
    printf("The reverse of the number is %d\n", rev);

    return 0;
}
