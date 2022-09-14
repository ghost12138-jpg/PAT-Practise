#include<bits/stdc++.h>

using namespace std;

int main(){
    int N,t=1,h=1,w=3,cha;
    char c;
    cin>>N>>c;
    while(N>=t+2*(w)){
        t+=2*(w);
        w+=2;
        h++;
    }
    cha=N-t;
    w-=2;
    for(int i=0;i<h;i++){
        string le(i,' '),mid(w-2*i,c);//,ri(i,' ');
        cout<<le+mid<<endl;
    }
    for(int i=h-2;i>=0;i--){
        string le(i,' '),mid(w-2*i,c);//,ri(i,' ');
        cout<<le+mid<<endl;
    }
    cout<<cha<<endl;
    return 0;
}