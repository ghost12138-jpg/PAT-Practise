#include<bits/stdc++.h>

using namespace std;

int main(){
    int num[10];
    for(int i=0;i<10;i++){
        cin>>num[i];
    }
    int i=1;
    while(i<10&&num[i]==0)i++;
    string res;
    res += '0'+i;
    num[i]--;
    for(int i=0;i<10;i++){
        while(num[i]--){
            res += '0'+i;
        }
    }
    cout<<res<<endl;
    return 0;
}