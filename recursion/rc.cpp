#include<iostream>
using namespace std;

void printNumberUsingBackTracking(int i,int n){
    if(i>n){
        return;
    }
    printNumberUsingBackTracking(i+1,n);
    cout<<i<<" ";
}

int main(){
    int i,n;
    cin>>n;
    printNumberUsingBackTracking(1,n);
    return 0;
}