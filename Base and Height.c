#include <stdio.h>

int main(void)
{
    int base, height;

    double area;

    printf("Base: ");
    scanf("%d", &base);

    printf("Height: ");
    scanf("%d", &height);

    area = (base * height) / 2.0;

    printf("Area: %.1f\n", area);

    return 0;
}
