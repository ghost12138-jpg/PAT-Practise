#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, mp[1001]={0}, res=0;
    cin>>n;
    while(n--){
        string s;
        int t=0, scores;
        cin>>s>>scores;
        for(auto i: s){
            if(i=='-')break;
            t*=10;
            t+= i-'0';
        }
        mp[t]+=scores;
        if(mp[t]>mp[res]){
            res = t;
        }
    }
    cout<<res<<' '<<mp[res]<<endl;
    return 0;
}