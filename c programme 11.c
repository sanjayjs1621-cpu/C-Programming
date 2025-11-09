 #include <stdio.h>

int main() {
    int a[100], n;
    int N_positive = 0, N_negative = 0, N_zero = 0;
    int N_even = 0, N_odd = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++) {
        if (a[i] > 0)
            N_positive++;
        else if (a[i] < 0)
            N_negative++;
        else
            N_zero++;

        if (a[i] % 2 == 0)
            N_even++;
        else
            N_odd++;
    }

    printf("\nNumber of positive elements: %d", N_positive);
    printf("\nNumber of negative elements: %d", N_negative);
    printf("\nNumber of zero elements: %d", N_zero);
    printf("\nNumber of even elements: %d", N_even);
    printf("\nNumber of odd elements: %d\n", N_odd);

    return 0;
}
