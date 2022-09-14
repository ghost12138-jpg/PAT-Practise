#include<bits/stdc++.h>

using namespace std;

int main(){
    int K,i=0,c=0;
    array<float, 1001> A{0},B{0};
    cin>>K;
    while(K){
        K--;
        int t=0;
        float t1;
        cin>>t>>t1;
        A[t]+=t1;
    }
    cin>>K;
    while(K){
        K--;
        int t=0;
        float t1;
        cin>>t>>t1;
        B[t]+=t1;
    }
    for(int i=0;i<1001;i++){
        A[i]+=B[i];
        if(A[i]<=-0.1||A[i]>=0.1)c+=1;
    }
    cout<<c;
    for(int i=1000;i>-1;i--){
        if(A[i]<=-0.1||A[i]>=0.1){
            printf(" %d %.1f",i,A[i]);
        }
    }
    cout<<endl;
    
    return 0;
}