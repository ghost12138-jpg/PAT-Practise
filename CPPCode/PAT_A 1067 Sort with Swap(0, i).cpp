#include<bits/stdc++.h>

using namespace std;

int main(){
    int N, ans = 0;
    scanf("%d",&N);
    int nums[N];
    for(int i=0;i<N;i++){
        int t;
        scanf("%d",&t);
        nums[t]=i;
    }
    for(int i=1;i<N;i++){
        while(nums[0]!=0){
            swap(nums[0],nums[nums[0]]);
            ans++;
        }
        if(nums[i]!=i){
            swap(nums[i],nums[0]);
            ans++;
        }
    }
    printf("%d\n",ans);
    return 0;
}