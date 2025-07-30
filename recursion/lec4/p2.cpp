#include <iostream>
using namespace std;

void printArray(int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArray(int i, int size, int arr[])
{
    if (i >= size / 2)
    {
        return;
    }
    swap(arr[i], arr[size - i - 1]);
    reverseArray(i + 1, size, arr);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(0, size, arr);
    printArray(size, arr);
    return 0;
}