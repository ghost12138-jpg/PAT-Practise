#include<bits/stdc++.h>

using namespace std;

int main(){
    map<int,int> mp;
    int c=0;
    cin>>c;
    while(c--){
        int k;
        cin>>k;
        mp[k]+=1;
    }
    cin>>c;
    while(c--){
        int k;
        cin>>k;
        cout<<mp[k];
        if(c)cout<<' ';
    }
    return 0;
}