#include<bits/stdc++.h>

using namespace std;
int n, k=0, mp[100005]={0}, nums[100005]={0};
int main(){

    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        mp[t]++;
        nums[k++]=t;
    }
    for(int i=0; i<k; i++){
        if(mp[nums[i]]==1){
            cout<<nums[i]<<endl;
            return 0;
        }
    }
    cout<<"None"<<endl;
    return 0;
}