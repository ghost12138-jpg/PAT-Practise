#include<bits/stdc++.h>

using namespace std;

int main(){
    int N=3;
    double xishu=1;
    while(N--){
        double w,t,l,m;
        cin>>w>>t>>l;
        m=max(w,max(t,l));
        if(m==w){
            cout<<"W ";
        }
        else if(m==t){
            cout<<"T ";
        }
        else cout<<"L ";
        xishu*=m;
    }
    cout<<fixed<<setprecision(2)<<(xishu*0.65-1)*2<<endl;
    return 0;
}