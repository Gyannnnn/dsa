#include<bits/stdc++.h>
using namespace std;

int main(){ 
    int s,i;
    cin>>s;
    int arr[s];
    for(i= 0 ; i<s;i++){
        cin>>arr[i];
    }
    cout<<"Entered array :";
    for(i= 0 ; i<s;i++){
        cout<<arr[i];
    }
    cout<<endl;
    map<int,int> mpp;
    // pre-computing
    for(i=0;i<s;i++){
        mpp[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        int number;
        cout<<"==================="<<endl;
        cin>>number;
        cout<<mpp[number]<<endl;
        cout<<"===================="<<endl;
    }
    return 0;
}