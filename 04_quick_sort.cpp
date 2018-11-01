#include<stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int *arr, int low, int high)
{
    // Right most element
    int pivot = arr[high];
    int i = low;

    for(int j = low; j < high; j++)
    {
        if(arr[j] <= pivot)
        {
            swap(&arr[i], &arr[j]);
            i++;
        }
    }

    swap(&arr[i], &arr[high]);

    return i;
}

void quickSort(int *arr, int low, int high)
{
    if(low > high)
        return;

    int pivot = partition(arr, low, high);

    quickSort(arr, low, pivot - 1);
    quickSort(arr, pivot + 1, high);
}

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n-1);
    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}
