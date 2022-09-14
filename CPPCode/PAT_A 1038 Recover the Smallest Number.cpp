#include<bits/stdc++.h>

using namespace std;

bool cmp(string a,string b){
    return stoll(a+b)<stoll(b+a);
}

int main(){
    int N;
    scanf("%d",&N);
    vector<string> num(N);
    for(int i=0;i<N;i++){
        cin>>num[i];
    }
    sort(num.begin(),num.end(),cmp);
    bool f=false;
    int j=0;
    while(!f && j<N){
        for(int i=0;i<num[j].length();i++){
            if(num[j][i]=='0'&&!f)continue;
            cout<<num[j][i];
            f=true;
        }
        j++;
    }

    for(int i=j;i<N;i++){
        cout<<num[i];
        f=true;
    }
    if(!f)cout<<'0';
    cout<<endl;
    return 0;
}
