#include<bits/stdc++.h>

using namespace std;

int main(){
    long long N,b;
    int f=0;
    cin>>N>>b;
    if(N==0){
        cout<<"Yes\n0"<<endl;
        return 0;
    }
    vector<long long > num;
    while(N){
        num.push_back(N%b);
        N/=b;
    }
    for(int i=0;i<num.size();i++){
        if(num[i]!=num[num.size()-1-i]){
            cout<<"No\n";
            f=1;
            break;
        }
    }
    if(!f){
        cout<<"Yes\n";
    }
    cout<<num[num.size()-1];
    for(int i=num.size()-2;i>=0;i--){
        cout<<' '<<num[i];
    }
    cout<<endl;
    return 0;
}