#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        int didSwap = 0; // optimisation for sorted array ;
        for (int j = 0; j < s - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                didSwap = 1;
            }
        }
        if (didSwap == 0)
        {
            break;
        }
        cout << "Runs " << endl;
    }

    printArray(arr, s);
}

int main()
{
    int s;
    cin >> s;
    int arr[s];
    for (int i = 0; i < s; i++)
        cin >> arr[i];
    cout << "Entered array :" << endl;
    printArray(arr, s);
    cout << "Sorted array :" << endl;
    bubbleSort(arr, s);
    return 0;
}