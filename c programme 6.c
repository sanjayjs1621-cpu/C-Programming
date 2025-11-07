#include <stdio.h>

int main()
{
    int m1, m2, m3, total;
    float average;
    char grade;

    printf("Enter 3 subject marks: ");
    scanf("%d %d %d", &m1, &m2, &m3);

    total = m1 + m2 + m3;
    average = total / 3.0;

    printf("\nTotal Marks = %.2f", (float)total);
    printf("\nAverage Marks = %.2f\n", average);

    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else if (average >= 50)
        grade = 'E';
    else
        grade = 'F';

    printf("\nGrade = %c", grade);

    if (average >= 50)
        printf("\nResult: PASS\n");
    else
        printf("\nResult: FAIL\n");

    return 0;
}
