#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,t=0;
    cin>>n;
    while((n)>=100){cout<<'B';n-=100;}
    while((n)>=10){n-=10;cout<<'S';}
    for(int i=0;i<n;i++)cout<<i+1;
    cout<<endl;
    return 0;
}