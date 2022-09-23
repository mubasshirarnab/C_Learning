#include<stdio.h>

int main()
{
    int total_height, feet, inch;
    printf("Enter the total Height in inches: ");
    scanf("%d", &total_height);

    feet=total_height/12;
    inch=total_height%12;

    printf("%d Inches = %d feet and %d Inch\n", total_height,feet,inch);

    return 0;
}
