 #include <stdio.h>

// Function to read array elements
void inputArray(int *arr, int n) {
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (arr + i));  // Using pointer arithmetic
    }
}

// Function to display array elements
void displayArray(int *arr, int n) {
    printf("Array elements are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));  // Using pointer arithmetic
    }
    printf("\n");
}

// Function to count positive numbers
int countPositive(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) > 0)
            count++;
    }
    return count;
}

// Function to count negative numbers
int countNegative(int *arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (*(arr + i) < 0)
            count++;
    }
    return count;
}

int main() {
    int arr[100], n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    inputArray(arr, n);
    displayArray(arr, n);

    // Count positives and negatives
    int posCount = countPositive(arr, n);
    int negCount = countNegative(arr, n);

    printf("\nNumber of positive elements: %d", posCount);
    printf("\nNumber of negative elements: %d", negCount);

    return 0;
}
