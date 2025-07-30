#include <iostream>
using namespace std;

bool checkPallindrome(int i, string s)
{
    int length = s.length();
    if (i > length / 2)
    {
        return true;
    }
    if (s[i] != s[length - i - 1])
    {
        return false;
    }
    return checkPallindrome(i + 1, s);
}

int main()
{
    string s;
    cin >> s;
    if (checkPallindrome(0, s))
    {
        cout << "Pallindrome !" << endl;
    }
    else
    {
        cout << "Not a pallindrome !" << endl;
    }
    return 0;
}