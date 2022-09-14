#include <bits/stdc++.h>

using namespace std;

int main(){
    int N = 0;
    cin>>N;
    vector<int> res (N,0);
    for(int i=0;i<N;i++){
        long long int A, B, C;
        cin>>A>>B>>C;
        if(A+B>C){
            res[i]=1;
        }
        else {
            res[i] = 0;
        }
        
    }
    for (int i=0;i<N;i++){
        printf("Case #%d: ",i+1);
        if(res[i]){
            cout<<"true";
        }
        else{
            cout<<"false";
        }
        cout<<endl;
    }
    return 0;
    
}