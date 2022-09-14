#include<bits/stdc++.h>

using namespace std;

class times{
    public:
    int MM,dd,HH,mm;
    bool of;//1 on; 0 off
    times(){}
    times(int M,int d,int H,int m,bool ofl){
        MM=M;
        dd=d;
        HH = H;
        mm = m;
        of =ofl;
    }
    array<int , 24> operator -(times t){
        array<int,24> res = {0};
        while(dd!=t.dd||HH!=t.HH||mm!=t.mm){
            t.mm++;
            res[t.HH]++;
            if(t.mm==60){
                t.mm=0;
                t.HH+=1;
            }
            if(t.HH==24){
                t.dd++;
                t.HH=0;
            }
        }
        return res;
    }
};
bool cmp1(times a,times b){
    if(a.dd!=b.dd){
        return a.dd < b.dd;
    }
    else if(a.HH!=b.HH){
        return a.HH<b.HH;
    }
    else if(a.mm!=b.mm){
        return a.mm<b.mm;
    }
}
class person{
    public:
    array<times, 1001> timeslist;
    int tl;
    long long ttt;
    string names;
    person(){}
    person(string n){
        names = n;
        tl=0;
        ttt=0;
    }
    void filter(){
        sort(timeslist.begin(),timeslist.begin()+tl,cmp1);
        int i=0,j=0;
        while(j+1<tl){
            if(timeslist[j].of&&!timeslist[j+1].of){
                timeslist[i]=timeslist[j];
                timeslist[i+1]=timeslist[j+1];
                i+=2;
                j+=2;
            }
            else j++;
        }
        tl = i;
    }
};

bool cmp2(person a,person b){
    return a.names<b.names;
}
array<person,1001> people;
int main(){
    array<int,24> triffs;
    for(int i=0;i<24;i++){
        scanf("%d",&triffs[i]);
    }
    int N;
    scanf("%d",&N);
    
    int pl = 0;
    while(N--){
        bool f = false,off;
        int MM,dd,hh,mm;
        char tn[22],ofl[22];
        scanf("%s%d:%d:%d:%d%s",tn,&MM,&dd,&hh,&mm,ofl);
        if("on-line"==string(ofl)){
            off = true;
        }
        else off =false;
        for(int i=0;i<pl;i++){
            if(people[i].names==string(tn)){
                people[i].timeslist[people[i].tl++] = times(MM,dd,hh,mm,off);
                f=true;
                break;
            }
        }
        if(!f){
            people[pl] = person(string(tn));
            people[pl].timeslist[people[pl].tl++] = times(MM,dd,hh,mm,off); 
            pl++;
        }
    }
    sort(people.begin(),people.begin()+pl,cmp2);
    for(int i=0;i<pl;i++){
        people[i].filter();
//         printf("%s ",people[i].names);
        if(people[i].tl<2){
            continue;
        }
        cout<<people[i].names+' ';
        printf("%02d\n",people[0].timeslist[0].MM);
        double tot = 0,tothh=0;
        long long tottimes=0;
        array<int ,24> tothhlists;
        for(int j=1;j<people[i].tl;j+=2){
            tothh=0;
            tottimes=0;
            tothhlists = people[i].timeslist[j]-people[i].timeslist[j-1];
            for(int k=0;k<24;k++){
                tothh+=triffs[k]*tothhlists[k];
                tottimes+=tothhlists[k];
            }
            printf("%02d:%02d:%02d %02d:%02d:%02d %lld $%.2lf\n",
                   people[i].timeslist[j-1].dd,people[i].timeslist[j-1].HH,people[i].timeslist[j-1].mm,
                   people[i].timeslist[j].dd,people[i].timeslist[j].HH,people[i].timeslist[j].mm,
                   tottimes,tothh/100
                  );
            tot+=tothh;
        }
        printf("Total amount: $%.2lf\n",tot/100);
    }
    return 0;
}