#include<bits/stdc++.h>

using namespace std;

bool cmp(int a,int b){
    return a>b;
}

int main(){
    int NC,NP;
    scanf("%d",&NC);
    vector<int> C(NC);
    for(int i=0;i<NC;i++){
        scanf("%d",&C[i]);
    }
    
    scanf("%d",&NP);
    vector<int> P(NP);
    for(int i=0;i<NP;i++){
        scanf("%d",&P[i]);
    }
    sort(C.begin(),C.end(),cmp);
    sort(P.begin(),P.end(),cmp);
    long long totlareward = 0;
    for(int i=0, j=0;i<NC&&j<NP&&C[i]>0&&P[j]>0;j++,i++){

        totlareward += C[i]*P[j];

    }
    for(int i=NC-1, j=NP-1;i>-1&&j>-1&&C[i]<0&&P[j]<0;i--,j--){

        totlareward += C[i]*P[j];


    }
    printf("%lld\n",totlareward);
    return 0;
}