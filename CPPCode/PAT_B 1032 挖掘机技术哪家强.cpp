#include<bits/stdc++.h>

using namespace std;

int main(){
    int N,maxnum=1;
    long long maxscore=0;
    cin>>N;
    vector<long long> s(N+5,0);
    
    while(N--){
        int t;
        long long t1;
        //cin>>t>>t1;
        scanf("%d%lld",&t,&t1);
        s[t]+=t1;
        if(s[t]>maxscore){
            maxscore=s[t];
            maxnum=t;
        }
    }
   //cout<<maxnum<<' '<<maxscore<<endl;
    printf("%d %lld\n",maxnum,maxscore);
    return 0;
}