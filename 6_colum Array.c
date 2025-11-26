#include <stdio.h>

int main(void) {

    int arr[6][6] = {0};

    int count = 1;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][j] = count;
            count++;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr[i][5] += arr[i][j];
        }
    }


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            // "%-5d" formats the number to be left-aligned in a 5-character space
            printf("%-5d", arr[i][j]);
        }
        printf("\n"); // Newline after each row
    }

    return 0;
}
