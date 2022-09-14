#include<bits/stdc++.h>

using namespace std;

int main(){
    long long pg,ps,pk,ag,as,ak,fu=1,cha=0;
    
    scanf("%lld.%lld.%lld %lld.%lld.%lld",&pg,&ps,&pk,&ag,&as,&ak);
    pk += pg*17*29 + ps*29;
    ak += ag*17*29 + as*29;
    cha = ak-pk;
    if(cha<0){
        cha = -cha;
        cout<<'-';
    }
    cout<<cha/17/29<<'.'<<(cha%(17*29))/29<<'.'<<(cha%(17*29))%29<<endl;
    return 0;
}