#include <stdio.h>

int main() {
    char str[100];
    int ch = 0, n = 0, space = 0, i;

    printf("Enter the String: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z')) {
            ch++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            n++;
        }
        else if (str[i] == ' ') {
            space++;
        }
    }

    printf("\nCharacters = %d\nDigits = %d\nSpaces = %d\n", ch, n, space);

    return 0;
}