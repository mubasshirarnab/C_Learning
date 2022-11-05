#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int feedback[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &feedback[i]);
    }

    int counts[6] = {0};

    for (int i = 0; i < N; i++) {
        counts[feedback[i]]++;
    }

    for (int i = 0; i <= 5; i++) {
        printf("%ds: %d\n", i, counts[i]);
    }
}
