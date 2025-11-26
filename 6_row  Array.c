#include <stdio.h>
#define ROWS 5
#define COLS 5

int main() {
    int arr[ROWS + 1][COLS + 1] = {0};

    int i, j;
    int count = 1;

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            arr[i][j] = count++;
        }
    }

    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {

            arr[i][COLS] += arr[i][j];

            arr[ROWS][j] += arr[i][j];
        }

        arr[ROWS][COLS] += arr[i][i];
    }
    for (i = 0; i < ROWS + 1; i++) {
        for (j = 0; j < COLS + 1; j++) {
            printf("%4d ", arr[i][j]);
        }
        printf("\n"); // Newline at the end of each row
    }

    return 0;
}
