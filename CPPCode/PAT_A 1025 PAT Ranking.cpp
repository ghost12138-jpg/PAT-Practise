#include<bits/stdc++.h>

using namespace std;

class student{
    public:
    char ID[15];
    int score,LOC;
    student(){}
    student(char id[],int sc,int loc){
        strcpy(ID,id);
        score= sc;
        LOC =loc;
    }
};
bool cmp(student a,student b){
    return a.score == b.score
        ? strcmp(a.ID,b.ID)<0
        : a.score>b.score;
}

int main(){
    array<student,30010> stu;
    array<int,101> locrank={0};
    vector<int> locscore(101,-10),rankcache(101,1);
    int N,K,stulen = 0,loc=1;
    scanf("%d",&N);
    while(N--){
        scanf("%d",&K);
        while(K--){
            char n[15];
            int t;
            scanf("%s%d",n,&t);
            stu[stulen++] = student(n,t,loc);
        }
        loc++;
    }
    sort(stu.begin(),stu.begin()+stulen,cmp);
    int fr=1,cache=1;
    printf("%d\n",stulen);
    for(int i=0;i<stulen;i++){
        if(i==0||stu[i].score!=stu[i-1].score){
            fr = i+1;
        }
        if(locscore[stu[i].LOC] != stu[i].score){
            locscore[stu[i].LOC] = stu[i].score;
            locrank[stu[i].LOC] += rankcache[stu[i].LOC];
            rankcache[stu[i].LOC]=1;
         }
        else{
            rankcache[stu[i].LOC]++;
        }
        printf("%s %d %d %d\n",
               stu[i].ID,fr,stu[i].LOC,locrank[stu[i].LOC]);
    }
    return 0;
}