#include<bits/stdc++.h>

using namespace std;

int main(){

    int xishu,zhishu,f=0;
    while(cin>>xishu>>zhishu){

        xishu*=(zhishu);
        zhishu-=1;
        if(xishu!=0){
           if(f) cout<<' '<<xishu<<' '<<zhishu;
            else{
                f=1;
                cout<<xishu<<' '<<zhishu;
            }
        }
    }
    if(!f)cout<<"0 0";
    return 0;
}