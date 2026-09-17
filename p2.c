#include <stdio.h>

int main() {
    int N;

    printf("Enter the number of consecutive hours (N): ");
    if (scanf("%d", &N) != 1 || N <= 0) {
        printf("Invalid input for number of hours.\n");
        return 1;
    }

    int patients[N];
    printf("Enter patient count for %d consecutive hours:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &patients[i]);
    }

    // 1, 2 & 3. Max, Min, Peak Hour, and Sum
    int maxPatients = patients[0];
    int peakHourIndex = 0;
    int minPatients = patients[0];
    double sum = patients[0];

    for (int i = 1; i < N; i++) {
        if (patients[i] > maxPatients) {
            maxPatients = patients[i];
            peakHourIndex = i;
        }
        if (patients[i] < minPatients) {
            minPatients = patients[i];
        }
        sum += patients[i];
    }

    double averagePatients = sum / N;

    // 4. Hours with patient count above average
    int aboveAverageHours = 0;
    for (int i = 0; i < N; i++) {
        if (patients[i] > averagePatients) {
            aboveAverageHours++;
        }
    }

    // Output Results
    printf("\n--- Results ---\n");
    printf("1. Maximum patients: %d (Occurred at Hour %d)\n", maxPatients, peakHourIndex + 1);
    printf("2. Minimum patients: %d\n", minPatients);
    printf("3. Peak hour: Hour %d (Count: %d)\n", peakHourIndex + 1, maxPatients);
    printf("4. Hours with patient count above average (Average: %.2f): %d\n", averagePatients, aboveAverageHours);

    return 0;
}