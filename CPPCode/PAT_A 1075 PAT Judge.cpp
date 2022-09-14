#include<bits/stdc++.h>

using namespace std;

class Students{
    public:
    array<int,5> problems;
    int vilsub,persub,tot,id;
    Students(){
        for(int i=0;i<problems.size();i++){
            problems[i]=-5;
        }
        vilsub=0,persub=0,tot=0;
    }
};
bool cmp(Students a,Students b){
    if(a.tot==b.tot){
        return a.persub==b.persub
            ? a.id<b.id
            : a.persub > b.persub;
    }
    else return a.tot > b.tot;
}
int main(){
    int N,K,M;
    array<Students,10001> stu;
    array<int, 5> fullmarks={0};
    scanf("%d%d%d",&N,&K,&M);
    for(int i=0;i<K;i++){
        scanf("%d",&fullmarks[i]);
    }
    while(M--){
        int id,pn,grades;
        scanf("%d%d%d",&id,&pn,&grades);
//         if(grades<0)continue;
        if(grades>=0)stu[id-1].vilsub+=1;
        if(stu[id-1].problems[pn-1]<grades){
            stu[id-1].problems[pn-1]= 
                grades>=0 ? grades : 0;
            if(grades==fullmarks[pn-1]){
                stu[id-1].persub+=1;
            }
        }
    }
    for(int i=0;i<N;i++){
        for(auto j:stu[i].problems){
            if(j>0){
                stu[i].tot+=j;
            }
        }
        stu[i].id = i+1;
    }
    sort(stu.begin(),stu.begin()+N,cmp);
    int ranks=1;
    for(int i=0;i<N;i++){
        if(stu[i].vilsub<1)continue;
        if(i>0&&stu[i].tot!=stu[i-1].tot){
            ranks=i+1;
        }
        printf("%d %05d %d",ranks,stu[i].id,stu[i].tot);
         if(stu[i].problems[0]>=0){
            printf(" %d",stu[i].problems[0]);
        }
        else printf(" -");
        for(int j=1;j<K;j++){
            if(stu[i].problems[j]>=0){
                printf(" %d",stu[i].problems[j]);
            }
            else printf(" -");
        }
        printf("\n");
    }
    return 0;
}