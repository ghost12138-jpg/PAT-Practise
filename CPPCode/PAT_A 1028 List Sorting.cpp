#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
    char ID[10];
    char names[10];
    int grade;
    Student(){}
    Student(char id[],char n[],int g){
        strcpy(ID,id);
        strcpy(names,n);
        grade = g;
    }
};
bool cmp0(Student a,Student b){
    return strcmp(a.ID,b.ID)<0;
}
bool cmp1(Student a,Student b){
    return strcmp(a.names,b.names)==0
        ? strcmp(a.ID,b.ID)<0
        : strcmp(a.names,b.names)<0;
}
bool cmp2(Student a,Student b){
    return a.grade == b.grade
        ? strcmp(a.ID,b.ID)<0
        : a.grade<b.grade;
}
int main(){
    int N,C,n;
    array<Student,100001> students;
    scanf("%d%d",&N,&C);
    n=N;
    while(N--){
        char id[15],names[15];
        int g;
        scanf("%s%s%d",id,names,&g);
        students[N] = Student(id,names,g);
    }
    switch(C){
        case 1:
            sort(students.begin(),students.begin()+n,cmp0);
            break;
        case 2:
            sort(students.begin(),students.begin()+n,cmp1);
            break;
        case 3:
            sort(students.begin(),students.begin()+n,cmp2);
            break;
    }
    for(int i=0;i<n;i++){
        printf("%s %s %d\n",
               students[i].ID,students[i].names,students[i].grade);
    }
    return 0;
}