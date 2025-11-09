 #include <stdio.h>

// Function declarations
void inputArray(int *arr, int n);
void displayArray(int *arr, int n);
int sumArray(int *arr, int n);
int countPositive(int *arr, int n);
int countNegative(int *arr, int n);

int main() {
    int arr[100];
    int n, sum, pos_C, neg_C;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    inputArray(arr, n);

    // Display array elements
    printf("\nArray elements are: ");
    displayArray(arr, n);

    // Calculate sum
    sum = sumArray(arr, n);
    printf("\nSum of all elements = %d", sum);

    // Count positive and negative numbers
    pos_C = countPositive(arr, n);
    neg_C = countNegative(arr, n);

    printf("\nCount of positive numbers = %d", pos_C);
    printf("\nCount of negative numbers = %d\n", neg_C);

    return 0;
}

// Function to input array elements
void inputArray(int *arr, int n) {
    int i;
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
}

// Function to display array elements
void displayArray(int *arr, int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
}

// Function to calculate sum of array elements
int sumArray(int *arr, int n) {
    int i, sum = 0;
    for (i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}

// Function to count positive numbers
int countPositive(int *arr, int n) {
    int i, count = 0;
    for (i = 0; i < n; i++) {
        if (*(arr + i) > 0)
            count++;
    }
    return count;
}

// Function to count negative numbers
int countNegative(int *arr, int n) {
    int i, count = 0;
    for (i = 0; i < n; i++) {
        if (*(arr + i) < 0)
            count++;
    }
    return count;
}
