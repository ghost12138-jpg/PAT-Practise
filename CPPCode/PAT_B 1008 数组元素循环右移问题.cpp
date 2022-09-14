//https://pintia.cn/problem-sets/994805260223102976/problems/994805316250615808
#include<bits/stdc++.h>

using namespace std;

int main(){
    int N,M;
    cin>>N>>M;
    M=M%N;
    vector<int> nums(N,0);
    for(int i=0;i<N;i++) cin>>nums[i];
    for(int i=N-M,j=N-1;i<j;i++,j--){
        int t= nums[i];
        nums[i]=nums[j];
        nums[j]=t;
    }
    for(int i=0,j=N-M-1;i<j;i++,j--){
        int t= nums[i];
        nums[i]=nums[j];
        nums[j]=t;
    }
    for(int i=0,j=N-1;i<j;i++,j--){
        int t= nums[i];
        nums[i]=nums[j];
        nums[j]=t;
    }
    for(int i=0;i<N;i++){
        cout<<nums[i];
        if(i!=N-1) cout<<' ';
        else cout<<endl;
    }
    return 0;
}