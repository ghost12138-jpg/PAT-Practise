#include<bits/stdc++.h>

using namespace std;

int main(){
    long long A,B,D;
    cin>>A>>B>>D;
    //vector<long long> num;
    string num;
    A+=B;
    if(A==0){
        cout<<0<<endl;
        return 0;
    }
    while(A){
        //num.push_back(A%D);
        num+='0'+A%D;
        A/=D;
    }

//     for(auto i=num.rbegin();i!=num.rend();i++){
//         cout<<(*i);
//     }    
//     cout<<endl;
    reverse(num.begin(),num.end());
    cout<<num<<endl;

    return 0;
}