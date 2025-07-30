#include <iostream>
using namespace std;

int fibboNacciNumber(int n)
{
    if(n<=1){
        return n;
    }
    return fibboNacciNumber(n - 1) + fibboNacciNumber(n - 2);
}

int main()
{
    int n, ans;
    cin >> n;
    ans = fibboNacciNumber(n);
    cout << ans << endl;
    return 0;
}