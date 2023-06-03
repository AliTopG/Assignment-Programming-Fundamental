#include <stdio.h>

int main() {
    int inputSeconds, hours, minutes, seconds;

    // Get the input from the user
    printf("Input Seconds? ");
    scanf("%d", &inputSeconds);

    // Calculate the hours, minutes, and seconds
    hours = inputSeconds / 3600;
    inputSeconds %= 3600;
    minutes = inputSeconds / 60;
    seconds = inputSeconds % 60;

    // Print the result
    printf("Hours Minutes Seconds\n");
    printf("%d %d %d\n", hours, minutes, seconds);

    return 0;
}