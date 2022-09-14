#include<bits/stdc++.h>

using namespace std;
bool cmp(pair<double,double> a,pair<double,double> b){
    return a.second > b.second;
}
int main(){
    int N;
    double D;
    cin>>N>>D;
    vector<pair<double,double> > kv(N);
    for(int i=0;i<N;i++){
        cin>>kv[i].first;
    }
    for(int i=0;i<N;i++){
        cin>>kv[i].second;
        kv[i].second/=kv[i].first;
    }
    sort(kv.begin(),kv.end(),cmp);
    double res=0;
    for(int i=0;i<N&&D>0;i++){
        res += kv[i].second*min(double(D),kv[i].first);
        D-=kv[i].first;
    }
    printf("%.2lf\n",res);
    return 0;
}