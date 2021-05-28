#include <stdio.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int i = (low - 1);
    for (int j = low; j < high; j++) 
        if (array[j] <= pivot)
            swap(&array[++i], &array[j]);
    swap(&array[++i], &array[high]);
    return i;
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(array, low, high);
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

int main()
{
    int data[100], n, i;
    printf("Enter the number of elements:");
    scanf("%d", &n);
    printf("Enter the elements:");
    for(i=0 ; i<n ; i++)
        scanf("%d", &data[i]);
    quickSort(data, 0, n - 1);
    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++)
        printf("%d\t", data[i]);
    return 0;
}
