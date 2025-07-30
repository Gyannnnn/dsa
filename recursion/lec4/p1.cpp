#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] <<" ";
    }
    cout<<endl;
}

void reverseArray(int arr[], int l, int r)
{
    if (l >= r)
    {

        return;
    }
    swap(arr[l], arr[r]);
    reverseArray(arr, l + 1, r - 1);
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, 0, size - 1);
    printArray(arr, size);
    return 0;
}