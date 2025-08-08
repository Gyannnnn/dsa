#include<iostream>
using namespace std;

void checkSorted(int arr[],int size){
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
           cout<<"Unsorted "<<endl;
           return;
        }
    }
    cout<<"Sorted"<<endl;

}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i = 0; i<size; i++){
        cin>>arr[i];
    }
    checkSorted(arr,size);
    return 0;
}



