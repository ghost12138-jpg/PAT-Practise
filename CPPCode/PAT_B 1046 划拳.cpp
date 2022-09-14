#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int N =0 ,r1=0,r2=0;
    cin>>N;
    while(N-->0){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        if(A+C==B&&A+C!=D){
            r2++;
        }
        else if(A+C!=B&&A+C==D){
            r1++;
        }
        
    }
    cout<<r1<<" "<<r2<<endl;
    
    return 0;
}