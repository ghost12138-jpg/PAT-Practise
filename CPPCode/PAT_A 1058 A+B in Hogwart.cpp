#include<bits/stdc++.h>

using namespace std;

int main(){
    long long pg,ps,pk,ag,as,ak,he=0;

    scanf("%lld.%lld.%lld %lld.%lld.%lld",&pg,&ps,&pk,&ag,&as,&ak);
    pk += pg*17*29 + ps*29;
    ak += ag*17*29 + as*29;
    he = ak+pk;
    if(he<0){
        he = -he;
        cout<<'-';
    }
    cout<<he/17/29<<'.'<<(he%(17*29))/29<<'.'<<(he%(17*29))%29<<endl;
    return 0;
}
