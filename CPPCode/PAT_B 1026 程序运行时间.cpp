#include<bits/stdc++.h>

using namespace std;

int main(){
    int C1,C2;
    cin>>C1>>C2;
    int C3 = C2-C1;
    int H=0,M=0,S=0,Y=0;
    Y = C3%100;
    C3/=100;
    H = C3/3600;
    C3%=3600;
    M = C3/60;
    C3%=60;

    S=C3;
    if(Y>=50){
        S+=1;
        
    }
    printf("%02d:%02d:%02d\n",H,M,S);
    
    
    return 0;
}