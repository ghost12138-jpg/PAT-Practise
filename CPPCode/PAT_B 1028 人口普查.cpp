#include<bits/stdc++.h>

using namespace std;
class age{
    public:
    string names;
    int year;
    int month;
    int day;
    age(){}
    age(string n,int y,int m,int d){
        names=n;
        year=y;
        month=m;
        day=d;
    }
    bool issmaller(age t){
        if(t.year==this->year){
            return 
                t.month==this->month ? t.day>this->day : t.month >this->month;
        }
        else{
            return t.year>this->year;
        }
    }
    bool islarger(age t){
        if(t.year==this->year){
            return 
                t.month==this->month ? t.day<this->day : t.month <this->month;
        }
        else{
            return t.year<this->year;
        }
    }

};
int main(){
    int N=0,c=0;
    age minlimit("",1814,9,6),maxlimit("",2014,9,6),maxage("",1814,9,6),minage("",2014,9,6);
    cin>>N;
    while(N--){
        string tname,tbirthday;
        cin>>tname>>tbirthday;
        age t(
            tname,
            stoi(tbirthday.substr(0,4)),
            stoi(tbirthday.substr(5,2)),
            stoi(tbirthday.substr(8,2))
        );
        if(!(t.issmaller(minlimit)||t.islarger(maxlimit))){
            c++;
            if(t.issmaller(minage)){
                minage=t;
            }
            if(t.islarger(maxage)){
                maxage=t;
            }
        }
    }
    if(c)cout<<c<<' '<<minage.names<<' '<<maxage.names<<endl;
    else cout<<c<<endl;
    return 0;
}