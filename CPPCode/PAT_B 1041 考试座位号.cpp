#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    cin>>N;
    map<long long , char*> dic;
    while(N--){
        long long a,b,c;
        cin>>a>>b>>c;
        char *val = (char*)malloc(sizeof(char)*25);
        sprintf(val,"%lld %lld",a,c);
        dic[b]=val;
    }
    int M;
    cin >>M;
    while(M--){
        long long  t;
        cin>>t;
        cout<<dic[t]<<endl;
    }
    return 0;
}