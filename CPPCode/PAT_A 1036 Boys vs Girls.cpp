#include <bits/stdc++.h>

using namespace std;

int main(){
    int N,minms=101,maxfs=-1;
    cin>>N;
    string malesinfo,felmainfo;
    while(N--){
        string names,sno;
        char gender;
        int score;
        cin>>names>>gender>>sno>>score;
        if(gender=='M'){
            if(score<minms){
                minms=score;
                malesinfo = names+' '+sno;
            }
        }
        else{
            if(score>maxfs){
                maxfs=score;
                felmainfo = names+' '+sno;
            }
        }
        
        
    }
    if(maxfs>=0)cout<<felmainfo<<endl;
    else cout<<"Absent\n";
    if(minms<=100)cout<<malesinfo<<endl;
    else cout<<"Absent\n";
    if(minms>100||maxfs<0){
        cout<<"NA"<<endl;
    }
    else cout<<maxfs-minms<<endl;
    return 0;
}