#include<bits/stdc++.h>
using namespace std;

int main(){
    int c=0,n=0;
    cin>>n;
    while(n!=1){
        if(n%2){
            n=(3*n+1)/2;
        }
        else{
            n/=2;
        }
        c++;
    }
    cout<<c;
    return 0;
}