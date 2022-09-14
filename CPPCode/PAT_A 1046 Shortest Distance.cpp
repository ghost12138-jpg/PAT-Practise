#include<bits/stdc++.h>

using namespace std;

int main(){
    int N;
    long long sum=0;
    cin>>N;
    vector<int> D(N);
    vector<long long > len(N,0);
    for(int i=0;i<N;i++){
        cin>>D[i];
        sum+=D[i];
        len[i]=sum;
    }
    int M;
    cin>>M;
    while(M){
        M--;
        long long a=0,b=0,d1=0,d2=0;
        cin>>a>>b;
        if(a>b){
//             for(int i=b-1;i<a-1;i++){
//                 d1+=D[i];
//             }
//             for(int i=a-1;i%N!=b-1;i++){
//                 d2+=D[i%N];
//             }
            d1=len[a-1]-len[b-1]-D[a-1]+D[b-1];
            d2=sum-d1;
            if(d2>d1)cout<<d1;
            else cout<<d2;
            
        }
        else if(a<b){
//             for(int i=b-1;i%N!=a-1;i++){
//                 d1+=D[i%N];
//             }
//             for(int i=a-1;i<b-1;i++){
//                 d2+=D[i];
//             }
            d1=-(len[a-1]-len[b-1]-D[a-1]+D[b-1]);
            d2=sum-d1;
            if(d2>d1)cout<<d1;
            else cout<<d2;
        }
        cout<<endl;
        
    }
    return 0;
}