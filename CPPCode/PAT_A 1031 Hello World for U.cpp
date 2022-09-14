#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int n1=0,n2=0;
    int N = s.length();
    n2 = N/3;
    if(n2<3)n2=3;
    n1 = (N-n2)/2;
    while(n1>n2-1){
        n1-=1;
        n2+=2;
    }
    n2+=N-(2*n1+n2);
    for(int i=0;i<n1;i++){
        string t(n2,' ');
        t[0]=s[i];t[n2-1]=s[N-1-i];
        cout<<t<<endl;
    }
    cout<<s.substr(n1,n2)<<endl;
    return 0;
}