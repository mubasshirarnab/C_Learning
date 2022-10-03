#include <stdio.h>

char* wordify( int a );
char* words [10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    for( ;a <= b;a++)
    {
        printf("%s\n", wordify(a) );
    }
    return 0;
}

char* wordify( int a )
{
    if ( a > 9 )
        return ( (a%2) ? "odd" : "even" );
    return words[a];
}
