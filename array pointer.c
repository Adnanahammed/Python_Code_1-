#include <stdio.h>

int main()
{
    int a[5] = { 2, 4, 6, 8, 22 };
    int *p = a;

    printf("a[0]: %d \n", a[0]);
    printf("p: %d \n", *p);


    printf("a[1] : %p \n", a[1]);
    printf("a+1 : %p \n", a+1);
    printf("*(a+1) : %d \n", *(a+1));
    printf("a[0] : %d \n", a[0]);
    printf("p+1 : %p \n", p+1);
    printf("*(p+1) : %d \n", *(p+1));

    return 0;
}
