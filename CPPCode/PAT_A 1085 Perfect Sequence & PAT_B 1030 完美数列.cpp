#include<bits/stdc++.h>

using namespace std;

int main(){
    int N, ans=0;
    cin>>N;
    long long p;
    vector<long long> num(N);
    cin>>p;
   for(int i=0;i<N;i++){
       cin>>num[i];
    }
    sort(num.begin(),num.end());
    int lower=0;
    while(lower+ans<N){
        while(lower>0&&num[lower]==num[lower-1]&&lower+ans<N)lower++;
        long long tmax = p * num[lower];
        int upper = lower +1;

        while(upper<N&&num[upper]<=tmax){
            upper = (upper+N+1)/2;
        }
        while(upper>N-1||num[upper]>tmax)upper--;
       //如果每次按顺序搜索会有超时的可能
//         while(upper<N&&num[upper]<=tmax)upper++;
        if(upper-lower + 1>ans){
            ans = 1 + upper-lower;
        }
        lower++;
    }
    cout<<ans<<endl;
    return 0;
}
