#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<string> strings;
    string t;
    while(cin>>t){
        strings.push_back(t);
    }
    reverse(strings.begin(),strings.end());
    for(auto i = strings.begin();i!=strings.end()-1;i++){
        cout<<(*i)+' ';
    }
    cout<<strings.back()<<endl;
    return 0;
}