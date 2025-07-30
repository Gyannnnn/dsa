#include <iostream>
using namespace std;

int sumUsingFunction(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sumUsingFunction(n - 1);
}

int main()
{
    int n, sum = 0;
    cin >> n;
    sum = sumUsingFunction(n);
    cout << sum << endl;
    return 0;
}