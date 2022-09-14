#include<bits/stdc++.h>

using namespace std;

int main(){
    string A,B,C;
    int i=0;
    array<char, 13> ji={
        '0','1','2','3','4','5','6','7','8','9','J','Q','K'
    };
    cin>>A>>B;
    if(A.size()>B.size()){
        string t (A.size()-B.size(),'0');
        B=t+B;
    }
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    for(i=0;i<A.size()&&i<B.size();i++){
        if(!(i%2)){
            B[i]=ji[((B[i]-'0')+(A[i]-'0'))%13];
        }
        else{
            int t = B[i]-A[i];
            if(t<0)t+=10;
            B[i]='0'+t;
        }
    }
//     while(i<A.size()){
//         if(!(i%2)){
//             B+=ji[((0)+(A[i]-'0'))%13];
//         }
//         else{
//             int t = '0'-A[i];
//             if(t<0)t+=10;
//             B+='0'+t;
//         }
//         i++;
//     }
    reverse(B.begin(),B.end());
    cout<<B<<endl;
    return 0;
}