#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;

    cout << "Entered string " << endl;
    cout << str << endl;
    int hash[256] = {0};
    for (int i = 0; i < str.size(); i++)
    {
        hash[str[i]] += 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cout << "========================================" << endl;
        cin >> c;
        cout << hash[c] << endl;
        cout << "========================================" << endl;
    }
    return 0;
}