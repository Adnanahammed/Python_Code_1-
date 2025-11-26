#include <stdio.h>

int main()
{
    int* p, a[5] = { 10, 20, 30, 40, 50 };

    p = a;

    printf("1. %p\n", a);
    printf("2. %d\n", *p);
    printf("3. %d\n", *(p + 1));
    printf("4. %d\n", p[2]);
    printf("5. %d\n", *(a + 2));

    p = p + 2;
    p = a + 2;

    printf("6. %p\n", a);
    printf("7. %d\n", *p);
    printf("8. %d\n", *(p + 2));
    printf("9. %p\n", p - 1);
    printf("10. %d\n", a[2]);
    printf("11. %d\n", p[2]);
    printf("12. %d\n", p[-1]);
    printf("13. %d\n", *p + 2);
    return 0;
}
