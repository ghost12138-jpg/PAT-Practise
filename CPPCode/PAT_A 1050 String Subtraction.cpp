#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    int mp[128]={0};
    for(int i:s2){
        mp[i]=1;
    }
    for(char c:s1){
        if(mp[c]==0)cout<<c;
    }
    cout<<endl;
    return 0;
}