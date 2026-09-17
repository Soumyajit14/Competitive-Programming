#include <stdio.h>

int main() {
    int N;

    printf("Enter the number of students: ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Invalid input for number of students.\n");
        return 1;
    }

    double attendance[N];
    printf("Enter attendance percentage for %d students:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%lf", &attendance[i]);
    }

    double threshold;
    printf("Enter attendance threshold: ");
    scanf("%lf", &threshold);

    // 1. Count students below threshold
    int countBelow = 0;
    for (int i = 0; i < N; i++) {
        if (attendance[i] < threshold) {
            countBelow++;
        }
    }

    // 2. Identify student with lowest attendance and their position
    double minAttendance = attendance[0];
    int minIndex = 0;
    for (int i = 1; i < N; i++) {
        if (attendance[i] < minAttendance) {
            minAttendance = attendance[i];
            minIndex = i;
        }
    }

    // 3. Calculate average attendance
    double total = 0.0;
    for (int i = 0; i < N; i++) {
        total += attendance[i];
    }
    double average = total / N;

    // Output Results
    printf("\n--- Results ---\n");
    printf("1. Students with attendance below threshold (%.2f%%): %d\n", threshold, countBelow);
    printf("2. Lowest attendance: %.2f%% (Student at position/index %d)\n", minAttendance, minIndex + 1);
    printf("3. Average attendance: %.2f%%\n", average);

    return 0;
}