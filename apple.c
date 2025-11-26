#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    char *sp;

    printf("Enter a string in lowercase: ");

    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    printf("Original string: %s\n", str);

    sp = str;

    for (; *sp != '\0'; sp++) {

        if (*sp >= 'a' && *sp <= 'z') {

            *sp -= 32;
        }
    }

    printf("Converted string: %s\n", str);

    return 0;
}
