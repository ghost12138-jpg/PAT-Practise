#include<bits/stdc++.h>

using namespace std;

class times{
    public:
    string names;
    int hh;
    int mm;
    int ss;
    times(){}
    times(string n,int h,int m,int s){
        names = n;
        hh=h;
        mm=m;
        ss=s;
        
    }
    bool islarger(times t){
        if(hh==t.hh){
            return mm == t.mm ? ss>t.ss : mm >t.mm;
        }
        return hh>t.hh;
    }
    bool issmaller(times t){
        if(hh==t.hh){
            return mm == t.mm ? ss<t.ss : mm <t.mm;
        }
        return hh<t.hh;
    }
};

int main(){
    int N;
    times maxtimes("",0,0,0),mintimes("",24,59,59);
    cin>>N;
    while(N--){
        string names,t1,t2;
        cin>>names>>t1>>t2;
//         scanf("%s %d:%d:%d",names,h,m,s);
        times ts (names,
                 stoi(t1.substr(0,2)),
                 stoi(t1.substr(3,2)),
                 stoi(t1.substr(6,2))
                 ),
                tu (names,
                 stoi(t2.substr(0,2)),
                 stoi(t2.substr(3,2)),
                 stoi(t2.substr(6,2))
                 );
        if(ts.issmaller(mintimes)){
            mintimes=ts;
        }

        if(tu.islarger(maxtimes)){
            maxtimes=tu;
        }

        
    }
    cout<<mintimes.names+' '+maxtimes.names<<endl;
    return 0;
}