#include<bits/stdc++.h>

using namespace std;

int main(){
    int N,n=0;
    cin>>N;
    n=N;
    vector<string > mod;
    while(N--){
        string names,pw;
        int c=0;
        cin>>names>>pw;
        for(int i=0;i<pw.size();i++){
            if(pw[i]=='1'){
                pw[i]='@';
                c++;
            }
            else if(pw[i]=='0'){
                pw[i]='%';
                c++;
            }
            else if(pw[i]=='l'){
                pw[i]='L';
                c++;
            }
            else if(pw[i]=='O'){
                pw[i]='o';
                c++;
            }
        }
        if(c){
            mod.push_back(names+" "+pw);
        }
    }
    if(mod.empty()){
        if(n>1)printf("There are %d accounts and no account is modified\n",n);
        else printf("There is %d account and no account is modified\n",n);
    }
    else{
        cout<<mod.size()<<endl;
        for(auto i:mod){
            cout<<i<<endl;
        }
    }
    return 0;
}