#include<bits/stdc++.h>

using namespace std;

int main(){
    int T,tcase=1;
    scanf("%d",&T);
    while(T--){
        long long a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        //cin>>a>>b>>c;
        long long res=a+b;
        bool fl;
        if(a>0&&b>0&&res<0)fl=true;
        else if (a<0&&b<0&&res>=0)fl=false;
        else if (res>c)fl=true;
        else fl=false;
        if(fl)printf("Case #%d: true\n",tcase++);
        else printf("Case #%d: false\n",tcase++);
    }
    return 0;
}