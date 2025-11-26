#include <stdio.h>

void SelectionSort(int a[], int size) {

    int i, j, t, temp;

    for (i = 0; i < size - 1; i++) {

        for (j = i + 1; j < size; j++) {
            if (a[i] > a[j]) {

                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }

        printf("\nStep %d : ", i + 1);
        for (t = 0; t < size; t++) {
            printf("%3d", a[t]);
        }
    }
}

int main() {

    int list[8] = { 69, 10, 30, 2, 16, 8, 31, 22 };
    int size = sizeof(list) / sizeof(list[0]);

    printf("Elements to be sorted : ");

    for (int i = 0; i < size; i++) {
        printf("%d ", list[i]);
    }

    printf("\n\n<<<<<<<<<<<< Performing Selection Sort >>>>>>>>>>>>\n");

    SelectionSort(list, size);

    return 0;
}
