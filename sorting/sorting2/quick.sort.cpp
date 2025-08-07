#include <bits/stdc++.h>
using namespace std;

int get_partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high-1)
        {
            i++;
        }
        while (arr[j] >= pivot && j >= low+1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int partition = get_partition(arr, low, high);
        quickSort(arr, low, partition - 1);
        quickSort(arr, partition + 1, high);
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Entered array : ";
    printArray(arr, size);
    quickSort(arr, 0, size-1);
    cout << "Sorted array: ";
    printArray(arr, size);
    return 0;
}