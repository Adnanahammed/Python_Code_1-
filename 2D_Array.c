#include <stdio.h>

int main() {
    int arr[5][5];
    int count = 1;

    for (int i = 0; i < 5; i++) {

        if (i % 2 == 0) {
            for (int j = 0; j < 5; j++) {
                arr[i][j] = count;
                count++;
            }
        } else {
            for (int j = 4; j >= 0; j--) {
                arr[i][j] = count;
                count++;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%-4d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
