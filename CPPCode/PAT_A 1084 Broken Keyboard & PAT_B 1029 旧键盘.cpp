#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,b,r;
    cin>>a>>b;
    int i=0,j=0;
    set<char> h;
    while(i<a.size()&&j<b.size()){
        while(a[i]!=b[j]){
            a[i]=toupper(a[i]);
            if(h.count(a[i]) == 0){
                h.insert(a[i]);
                cout<<a[i];
//                 r+=(a[i]);
            }
            i++;
        }
        i++;j++;
    }
    //判断b结束后的字符
    while(i<a.size()){
        a[i]=toupper(a[i]);
        if(h.count(a[i]) == 0){
            h.insert(a[i]);
            cout<<a[i];
//                 r+=(a[i]);
        }
        i++;
    }
    cout<<endl;
   return 0;
}