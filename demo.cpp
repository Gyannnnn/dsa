#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    map<char,int> mpp;
    for(int i = 0; i<s.size();i++){
        mpp[s[i]]++;
    }
    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;
        cout<<ch<<"->"<<mpp[ch]<<endl;

    }
}