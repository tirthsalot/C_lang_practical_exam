#include <stdio.h>

int main() {
    int i, marks[5], sum = 0;
    float avg;

    printf("Enter marks of 5 subjects:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    avg = sum / 5.0;
    printf("Average = %.2f\n", avg);

    if(avg >= 90) printf("Grade: A\n");
    else if(avg >= 75) printf("Grade: B\n");
    else if(avg >= 60) printf("Grade: C\n");
    else if(avg >= 50) printf("Grade: D\n");
    else printf("Grade: F\n");

    return 0;
}
