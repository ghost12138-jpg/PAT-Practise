#include<bits/stdc++.h>

using namespace std;

int main(){
//     long long N;
//     array<int, 10> wei ={0};
//     cin>>N;
// //     if(!N){
// //         cout<<"0:1"<<endl;
// //         return 0;
// //     }
//     do{
//         wei[N%10]+=1;
//         N/=10;
//     }while(N);
    string N;
    cin>>N;
    array<int, 10> wei ={0};
    for(auto i:N){
        wei[i-'0']+=1;
    }
    for(int i=0;i<10;i++){
        if(wei[i]){
            cout<<i<<':'<<wei[i]<<endl;
        }
    }
    return 0;
}