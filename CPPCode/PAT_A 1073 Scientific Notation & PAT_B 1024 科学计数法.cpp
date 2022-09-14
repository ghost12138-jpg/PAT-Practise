#include<bits/stdc++.h>

using namespace std;

int main(){
    string num,dishu;
    int i=0;
    cin>>num;
    if(num[0]=='-')cout<<'-';
    for(i=1;num[i]!='E';i++){
        if(num[i]!='.')dishu+=num[i];
    }
    int z = stoi(num.substr(++i));
    if(z<0){
        z=-z;
        i+=1;
        cout<<"0.";
        string zeros(z-1,'0');
        cout<<zeros<<dishu;
    }
    else if(z>0){
        i+=1;
        for(i=0;i<dishu.size();i++){
            if(i==z+1)cout<<'.';
            cout<<dishu[i];
        }
        while(i<=z){
            cout<<'0';
            i++;
        }
    }
    cout<<endl;
    return 0;
}