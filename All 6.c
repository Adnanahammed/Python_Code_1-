#include <stdio.h>

int main() {
    int arr[6][6] = {0};
    int count = 1;
    int diagonal_sum = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = count;
            count++;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][5] += arr[i][j];

            arr[5][i] += arr[j][i];
        }

        diagonal_sum += arr[i][i];
    }

    arr[5][5] = diagonal_sum;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
