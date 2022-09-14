#include <bits/stdc++.h>

using namespace std;

int main(){
    string a,b,r;
    getline(cin,a);
    getline(cin,b);
    set<char> h;
    for(auto i : a){
        h.insert(i);
    }
    for(auto i : b){
        if(h.count('+')&&isupper(i)||h.count(toupper(i))){
            continue;
        }
        r+=i;
        
    }
    cout<<r<<endl;
    return 0;
}