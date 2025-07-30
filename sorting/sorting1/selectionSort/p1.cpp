#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int s)
{
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

void selectionSort(int arr[], int s)
{
    for (int i = 0; i < s - 2; i++)
    {
        int min = i;
        for (int j = i; j <= s - 1; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);
    }
    cout << "Sorted Array :" << endl;
    printArray(arr, s);
}

int main()
{
    int s;
    cin >> s;
    int arr[s];
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, s);
    return 0;
}