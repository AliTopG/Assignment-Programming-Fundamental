#include <stdio.h>

#define NUM_SUBJECTS 5

int main() {
    int seatNo, marks[NUM_SUBJECTS];
    char name[50];

    // Input seat number and name
    printf("Enter seat number: ");
    scanf("%d", &seatNo);
    printf("Enter name: ");
    scanf("%s", name);

    // Input marks for each subject
    printf("Enter marks for each subject:\n");
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Calculate total marks
    int totalMarks = 0;
    for (int i = 0; i < NUM_SUBJECTS; i++) {
        totalMarks += marks[i];
    }

    // Calculate percentage
    float percentage = (float)totalMarks / NUM_SUBJECTS;

    // Print the result
    printf("\n\n********** Result **********\n");
    printf("Seat Number: %d\n", seatNo);
    printf("Name: %s\n", name);
    printf("----------------------------\n");
    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("*****************************\n");

    return 0;
}