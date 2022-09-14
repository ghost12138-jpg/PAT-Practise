#include<bits/stdc++.h>

using namespace std;

class person{
    public:
    int ID,tag;
    int VG,TG,L,H,TOT;
    person(){}
    person(int  id, int vg, int tg,int l,int h){
        ID = id;
        VG = vg;
        TG = tg;
        L = l;
        H = h;
        TOT = vg + tg;
        if(tg>=h&&vg>=h){tag=0;}//sages
        else if(vg>=h){tag=1;}//nobelmen
        else if(vg<h&&vg>=tg){tag=2;}//fool men
        else if(vg<h&&vg<tg){tag=3;}//rest people
    }


    bool operator >(person t){
        if(this->tag==t.tag){
            return 
                this->TOT == t.TOT ? 
                (this->VG == t.VG ? this->ID < t.ID : this->VG > t.VG) 
                : this->TOT>t.TOT;
        }
        else{
            return this->tag<t.tag;
        }
    }

    bool operator <(person t){
        if(this->tag==t.tag){
            return 
                !(this->TOT == t.TOT ? 
                (this->VG == t.VG ? this->ID < t.ID : this->VG > t.VG) 
                : this->TOT>t.TOT);
        }
        else{
            return this->tag>t.tag;
        }
    }

};
bool cmp(person a,person t){
        if(a.tag==t.tag)
            return 
                a.TOT == t.TOT ? 
                (a.VG == t.VG ? a.ID < t.ID : a.VG > t.VG) 
                : a.TOT>t.TOT;
        else{
            return a.tag<t.tag;
        }
}
void my_sorted(array<person,100001> &array,int lefts, int right){
    if(right-lefts<2||lefts<0||right>100000)return;
    int l=lefts,r=right-1;
    person t = array[l];
    while(l<r){
        while(r>l&&array[r]<t)r--;
        if(r>l){array[l]=array[r];l++;}
        while(r>l&&array[l]>t)l++;
        if(r>l){array[r]=array[l];r--;}
    }
    array[l]=t;
    my_sorted(array,lefts,l);
    my_sorted(array,l+1,right);
}
int main(){
    int N,L,H,c=0;
    scanf("%d%d%d",&N,&L,&H);
    array<person,100001> ranks;
    while(N--){
        int id;
        int v,t;
        scanf("%d%d%d",&id,&v,&t);
        if(t<L||v<L) continue;
        person tp(id,v,t,L,H);
        ranks[c++]=tp;
        //直接插入排序
//         int i =c-1;
//         while(i>=1&&tp>ranks[i-1]){
//             ranks[i]=ranks[i-1];
//             i--;
//         }
//         ranks[i]=tp;

    }
    //快排 这里元素的大小关系要注意
//     sort(ranks.begin(),ranks.begin()+c,cmp);
    my_sorted(ranks,0,c);
    printf("%d\n",c);

    for(int i=0;i<c;i++){
        printf("%d %d %d\n",ranks[i].ID,ranks[i].VG,ranks[i].TG);
    }
    return 0;
}