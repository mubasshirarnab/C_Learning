#include <stdio.h>

int main() {
    int numbers[5] = {10, 43, 5, 6, 23};
    
    for (int pass = 0; pass < 5; pass++) {
        int max = 0;
        int imax = 0;
        int lastvalue = 5 - pass;
        for (int i = 0; i < lastvalue; i++) {
            if (numbers[i] > max) {
                max = numbers[i];
                imax = i;
            }
        }
        int temp;
        temp = numbers[imax];
        numbers[imax] = numbers[lastvalue-1];
        numbers[lastvalue-1] = temp;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}