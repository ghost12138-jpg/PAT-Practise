#include<bits/stdc++.h>

using namespace std;

int main(){
    array<int, 17> weight={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    array<char, 11> M={'1','0','X','9','8','7','6','5','4','3','2'};
    int N;
    bool ap=true;
    cin>>N;
    while(N--){
        string id,zstrs;
        cin>>id;
        zstrs = id.substr(0,17);
        char m = id[17];
        long long z=0;
        bool f=false;
        if(isdigit(*(zstrs.c_str()))){
            for(int i=0;i<zstrs.size();i++){
                z+=(zstrs[i]-'0')*weight[i];
            }
            if(m==M[z%11]){
                f=true;
            }
        }
        if(f==false){
            cout<<id<<endl;
            ap=false;
        }
    }
    if(ap){
        cout<<"All passed"<<endl;
    }
    return 0;
}