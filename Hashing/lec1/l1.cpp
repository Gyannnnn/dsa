#include <iostream>
using namespace std;

int main()
{
    int s;
    cin >> s;
    int arr[s];
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    cout << "Entered array :" << endl;
    for (int i = 0; i < s; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    int hash[13] = {0};
    for (int i = 0; i < s; i++)
    {
        hash[arr[i]] += 1;
    }
    int q;
    cin>>q;
    while (q--)
    {
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
    }

    return 0;
}