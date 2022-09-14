#include<bits/stdc++.h>

using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    vector<int> nums(N);
    for(int i=0;i<N;i++){
        cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    int i=0,j=N-1;
    while(i<j){
        if(nums[i]+nums[j]==M){
            cout<<nums[i]<<' '<<nums[j]<<endl;
            return 0;
        }
        else if(nums[i]+nums[j]>M){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"No Solution"<<endl;
    return 0;
}