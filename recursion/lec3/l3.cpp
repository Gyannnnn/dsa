#include<iostream>
using namespace std;

void sumUsingRecursion(int n,int sum){
    if(n<1){
        cout<<sum<<endl;
        return;
    }
    sumUsingRecursion(n-1,sum+n);
}

int main(){
    int n;
    cin>>n;
    sumUsingRecursion(n,0);
    return 0;
}