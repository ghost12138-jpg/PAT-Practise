#include<bits/stdc++.h>

using namespace std;

class Person{
    public:
    char name[12],ID[12];
    int grade;
    Person(){};
};
bool cmp(Person a,Person b){
    return a.grade > b.grade ? true : false;
}
int main(){
    int N,g1,g2;
    bool empty=false;
    scanf("%d",&N);
    array<Person,10001> people;
    for(int i=0;i<N;i++){
        scanf("%s%s%d",people[i].name,people[i].ID,&people[i].grade);
    }
    scanf("%d%d",&g1,&g2);
    sort(people.begin(),people.begin()+N,cmp);
    for(int i=0;i<N;i++){
        if(people[i].grade>=g1&&people[i].grade<=g2){
            printf("%s %s\n",people[i].name,people[i].ID);
            empty = true;
        }
    }
    if(!empty){
        printf("NONE\n");
    }
    return 0;
}