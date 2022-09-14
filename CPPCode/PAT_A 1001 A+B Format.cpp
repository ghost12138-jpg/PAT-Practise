#include<bits/stdc++.h>

using namespace std;

int main(){
    long long a,b;
    cin>>a>>b;
    a+=b;
    if(a<0){
        cout<<'-';
        a=-a;
    }
    string as = to_string (a);
    b = as.length()%3;
    for(int i=0;i<as.length();i++){
        if(!b){
            if(i)cout<<',';
            b=2;
        }
        else {
            b--;
        }
        cout<<as[i];
    }
    cout<<endl;
    return 0;
}