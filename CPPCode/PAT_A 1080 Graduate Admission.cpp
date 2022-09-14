#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
    int G1,G2,tot,id;
    array<int, 6> choice;
    Student(){
        choice.fill(false);
    };
};
class School{
    public:
    int quota,minstu,stulen;
    array<bool,40001> students;
    School(){
        stulen = 0;
        minstu = -1;
        students.fill(false);
    }
};
bool cmp(Student a,Student b){
    return a.tot == b.tot ?
        a.G1 > b.G1
        : a.tot>b.tot;
}
int main(){
    int N,M,K;
    array<School,101> sch;
    array<Student,40001> stu;
    scanf("%d%d%d",&N,&M,&K);
    for(int i=0;i<M;i++){
        scanf("%d",&sch[i].quota);
    }
    for(int i=0;i<N;i++){
        scanf("%d%d",&stu[i].G1,&stu[i].G2);
        stu[i].tot = stu[i].G1 + stu[i].G2;
        stu[i].id = i;
        for(int j=0;j<K;j++){
            scanf("%d",&stu[i].choice[j]);
        }
    }
    sort(stu.begin(),stu.begin()+N,cmp);
    for(int i=0;i<N;i++){
        for(int j=0;j<K;j++){
            if(sch[stu[i].choice[j]].quota>0
              || sch[stu[i].choice[j]].stulen>0 && stu[sch[stu[i].choice[j]].minstu].tot == stu[i].tot &&stu[sch[stu[i].choice[j]].minstu].G1 == stu[i].G1
              ){
                sch[stu[i].choice[j]].quota--;
                sch[stu[i].choice[j]].minstu = i;
                sch[stu[i].choice[j]].students[stu[i].id]=true;
                sch[stu[i].choice[j]].stulen++;
                break;
            }
        }
    }
    for(int i=0;i<M;i++){
        for(int j=0,c=0;j<sch[i].students.size()&&c<sch[i].stulen;j++){
            if(sch[i].students[j]&&c==0){
                printf("%d",j);
                c++;
            }
            else if(sch[i].students[j]){
                printf(" %d",j);
            }
        }
        printf("\n");
    }
    return 0;
}