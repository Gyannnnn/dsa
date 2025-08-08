#include<iostream>
using namespace std;




int main(){
    int size;
    cin>>size;
    int arr[size];
    int l1 = 0,l2 = -1;
    // find largest
    for(int i=0;i<size;i++){
        cin>>arr[i];
        if(arr[i]>l1){
            l1 = arr[i];
        }
    }
    // find second largest
    for(int i = 0;i<size;i++){
        if(arr[i]>l2 && arr[i]!=l1){
            l2 = arr[i];
        }
    }
    cout<<"Largest : "<<l1<<endl;
    cout<<"2nd Largest : "<<l2<<endl;
    
    return 0;
}