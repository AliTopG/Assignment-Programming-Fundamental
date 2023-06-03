#include <stdio.h>

int main() {
    char character;

    printf("Enter any character: ");
    scanf("%c", &character);

    printf("ASCII Value of %c character is: %d\n", character, character);

    return 0;
}