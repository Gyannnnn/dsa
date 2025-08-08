// set solution
// 2 pointer


// 2 pointer


#include<iostream>
using namespace std;



int main(){
    int arr[5] = {1,1,2,2,3};
    int i = 0;
    for(int j=1;j<5;j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    i = i+1;
    cout<<i;
    return 0;
}