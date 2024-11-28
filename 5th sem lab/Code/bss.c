#include <stdio.h>

int binarySearchRecursive(int arr[], int low, int high, int key);

int main()
{
    int n, key, index;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key to search: ");
    scanf("%d", &key);

    index = binarySearchRecursive(arr, 0, n - 1, key);

    if (index == -1)
        printf("Key not found\n");
    else
        printf("Key found at position %d\n", index + 1);

    return 0;
}

int binarySearchRecursive(int arr[], int low, int high, int key)
{
    if (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            return binarySearchRecursive(arr, mid + 1, high, key);
        else
            return binarySearchRecursive(arr, low, mid - 1, key);
    }

    return -1;
}
