#include<stdio.h>

int main()
{
    int t;
    printf("Enter the Temperature: ");
    scanf("%d", &t);

    if(t<0){
        printf("Freezing Weather");
    }
    else if(t>=0 && t<=10){
        printf("Very Cold Weather");
    }
    else if(t>=10 && t<=20){
        printf("Cold Weather");
    }
    else if(t>=20 && t<=30){
        printf("Normal Weather");
    }
    else if(t>=30 && t<=40){
        printf("Hot Weather");
    }
    else{
        printf("Very hot Weather");
    }

    return 0;
}
