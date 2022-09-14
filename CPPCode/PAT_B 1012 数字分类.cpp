#include<bits/stdc++.h>

using namespace std;

int main(){
    long long N=0,Nn[5]={0},A[5]={0},a2=1;
    cin>>N;
    while(N){
        N--;
        int t=0;
        cin>>t;
        if(t%10==0){
            Nn[0]++;
            A[0]+=t;
        }
        else if(t%5==1){
            Nn[1]+=1;
            A[1]+=a2*t;
            a2*=-1;
        }
        else if(t%5==2){
            Nn[2]++;
            A[2]=Nn[2];
       }
        else if(t%5==3){
            Nn[3]+=1;
            A[3]+=t;
        }
        else if(t%5==4){
            Nn[4]+=1;
            if(A[4]<t){
                A[4]=t;
            }
        }
    }
    for(int i=0;i<5;i++){
        if(Nn[i]==0){
            cout<<'N';
        }
        else if(i==3){
            printf("%.1f",A[3]*1.0/Nn[3]);
        }
        else cout<<A[i];
        if(i==4){
            cout<<endl;
        }
        else{
            cout<<' ';
        }
    }
    return 0;
}