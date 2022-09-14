#include<bits/stdc++.h>

using namespace std;

int main(){
    int N, t;
    cin>>N;
    int nums[101],mp[10000]={0};
    for(int i=0;i<N;i++){
        cin>>nums[i];
        t = nums[i];
        while(t!=1){
            if(t%2){
                t=(3*t+1)/2;
            }
            else{
                t/=2;
            }
            mp[t]=1;
        }
    }
    sort(nums,nums+N);
    bool f=false;
    for(int i=N-1;i>=0;i--){
        if(!f&&mp[nums[i]]==0){cout<<nums[i];f=true;}
        else if(mp[nums[i]]==0){cout<<' '<<nums[i];}
    }
    cout<<endl;
    return 0;
}