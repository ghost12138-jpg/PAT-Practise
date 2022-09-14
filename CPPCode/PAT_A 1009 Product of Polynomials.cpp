#include<bits/stdc++.h>

using namespace std;

int main(){
    int K=0,c=0;
    long long m=-1;
    //array<double 1001> A={0},B={0};
    map<long long ,double> A,B,C;
    
    cin>>K;
    while(K--){
        long long  t1;
        double t2;
        cin>>t1>>t2;
        if(!(A.count(t1))){
            A[t1]=t2;
        }
        else{
            A[t1]+=t2;
        }
    }
    cin>>K;
    while(K--){
        long long  t1;
        double t2;
        cin>>t1>>t2;
        if(!(B.count(t1))){
            B[t1]=t2;
        }
        else{
            B[t1]+=t2;
        }
    }
    for(auto i:A){
        for(auto j:B){
            long long  t1 = i.first+j.first;
            double t2 = i.second*j.second;
            if(!(C.count(t1))){
                C[t1]=t2;
            }
            else {
                C[t1]+=t2;
            }
        }
    }
    for(auto i:C){
        if(i.second!=0.0){
            c+=1;
            if(i.first>m)m=i.first;
        }
    }
    cout<<c;
    for(int i=m;i>=0&&m;i--){
        if(C.count(i)&&C[i]!=0.0){
            printf(" %d %.1f",i,C[i]);
        }
    }
    cout<<endl;
    return 0;
}