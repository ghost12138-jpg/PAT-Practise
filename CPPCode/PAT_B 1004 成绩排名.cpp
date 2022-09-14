#include<bits/stdc++.h>

using namespace std;

int main(){
    int N=0,maxsocre=0,minscore=100;
    cin>>N;
    string maxname,maxno,minname,minno,a;
    while(N--){
        string t1,t2;
        int t;
        cin>>t1>>t2>>t;
        if(t>maxsocre){
            maxsocre=t;
            maxname=t1;
            maxno=t2;
        }
        if(t<minscore){
            minscore=t;
            minname=t1;
            minno=t2;
        }
    }
    cout<<maxname<<' '<<maxno<<endl;
    cout<<minname<<' '<<minno;
    return 0;
}