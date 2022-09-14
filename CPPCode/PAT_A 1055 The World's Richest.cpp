#include<bits/stdc++.h>

using namespace std;

class Person{
    public:
    char Names[10];
    int Age,Worth;
    Person(){}
    Person(char n[],int a,int w){
        strcpy(Names,n);
        Age=a;
        Worth = w;
    }
};
bool cmp(Person a,Person b){
    if(a.Worth==b.Worth){
        return a.Age == b.Age ? strcmp(a.Names,b.Names)<0 : a.Age<b.Age;
    }
    return a.Worth>b.Worth;
}
int main(){
    int N,K;
    array<Person,100001> people;
    scanf("%d%d",&N,&K);
    for(int i=0;i<N;i++){
        char names[10];
        int a,w;
        scanf("%s%d%d",names,&a,&w);
        people[i]=Person(names,a,w);
    }
    sort(people.begin(),people.begin()+N,cmp);
    for(int i=0;i<K;i++){
        int f=0,outmax,amin,amax;
        scanf("%d%d%d",&outmax,&amin,&amax);
        printf("Case #%d:\n",i+1);
        for(int j=0;j<N&&f<outmax;j++){
            if(people[j].Age>=amin&&people[j].Age<=amax){
                f++;
                printf("%s %d %d\n",
                      people[j].Names,people[j].Age,people[j].Worth
                      );
            }
        }
        if(!f){
            printf("None\n");
        }
        
    }
    return 0;
}