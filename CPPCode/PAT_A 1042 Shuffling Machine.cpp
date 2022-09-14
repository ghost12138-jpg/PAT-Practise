#include<bits/stdc++.h>

using namespace std;

int main(){
    int K,f=0;
    vector<int> ord (54,0);
    vector<vector<string> > orders(2,vector<string>(54));
    orders[0]={"S1", "S2", "S3", "S4", "S5", "S6", "S7", "S8", "S9", "S10", "S11", "S12", "S13",
               "H1", "H2", "H3", "H4", "H5", "H6", "H7", "H8", "H9", "H10", "H11", "H12", "H13",
               "C1", "C2", "C3", "C4", "C5", "C6", "C7", "C8", "C9", "C10", "C11", "C12", "C13",
               "D1", "D2", "D3", "D4", "D5", "D6", "D7", "D8", "D9", "D10", "D11", "D12", "D13",
               "J1", "J2"};
//     char a[5]={'S','H','C','D','J'};
//     for(int i=0;i<5;i++){
//         for(int j=1;j<14;j++){
//             if(j==3&&i==4)break;
//             cout<<'\"'<<a[i]<<j<<"\", ";
//         }
//     }
    cin>>K;
    while(K){
        K--;
        if(f==0){
            for(int i=0;i<54;i++){
                cin>>ord[i];
                orders[1][ord[i]-1]=orders[0][i];
            }
        }
        else{
            for(int i=0;i<54;i++){
                //cin>>ord[i];
                orders[(f+1)%2][ord[i]-1]=orders[(f)%2][i];
            }
        }
        f++;

    }
    for(int i=0;i<ord.size();i++){
        cout<<orders[f%2][i];
        if(i!=ord.size()-1)cout<<' ';
        else cout<<endl;
    }
    return 0;
}