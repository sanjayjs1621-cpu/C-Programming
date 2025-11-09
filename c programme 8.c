 // Function to calculate sum of array elements
int sumArray(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

// Count positives (> 0)
int countPositive(const int arr[], int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] > 0)
            cnt++;
    return cnt;
}
