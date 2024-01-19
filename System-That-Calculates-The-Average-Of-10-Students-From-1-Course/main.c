#include <stdio.h>

int main() {
    int grades[10][3], i, j, average[10][3];

    for (i = 0; i < 10; i++) {
        printf("Enter the midterm, final, and project grades for student %d: ", i + 1);
        scanf("%d%d%d", &grades[i][0], &grades[i][1], &grades[i][2]);
        average[i][j] = (grades[i][0] * 0.3) + (grades[i][1] * 0.5) + (grades[i][2] * 0.2);
    }

    for (i = 0; i < 10; i++) {
        printf("The average grade for student %d in the course is %d\n", i + 1, average[i][j]);
    }

    return 0;
}

