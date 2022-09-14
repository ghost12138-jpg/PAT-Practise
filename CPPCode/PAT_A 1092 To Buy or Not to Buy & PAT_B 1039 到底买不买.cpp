#include<bits/stdc++.h>

using namespace std;

int main(){
    bool flags=true;
    int c1=0,c2=0,fc=0;
    map<int,int> mp;
    string a,b;
    cin>>a>>b;
    for(int c:a){
        mp[c]+=1;
        c1+=1;
    }
    for(int c :b){
        mp[c]-=1;
        c2+=1;
        if(mp[c]<0){
            flags=false;
            fc+=1;
        }
    }
    if(flags){
        cout<<"Yes "<<c1-c2<<endl;
    }
    else{
        cout<<"No "<<fc<<endl;
    }
    return 0;
}