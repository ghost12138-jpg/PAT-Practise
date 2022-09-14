#include <bits/stdc++.h>

using namespace std;

int main(){
    string A,B;
    int da,db;
    cin>>A>>da>>B>>db;
    int pa=0,pb=0;
    for(int i=0;i<A.length();i++){
        if(A[i]==da+'0'){
            pa*=10;
            pa+=da;
        }
    
    }
    for(int i=0;i<B.length();i++){
        if(B[i]==db+'0'){
            pb*=10;
            pb+=db;
        }
    }
    cout<<pa+pb<<endl;
    return 0;
}