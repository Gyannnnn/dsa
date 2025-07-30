#include<iostream>
using namespace std;


void sumOfn(int n,int sum){
    if(n<1){
        cout<<sum<<endl;
        return ;
    }
    sumOfn(n-1,sum+n);
}


int main(){
    int n;
    cin>>n;
    sumOfn(n,0);
    return 0;
}