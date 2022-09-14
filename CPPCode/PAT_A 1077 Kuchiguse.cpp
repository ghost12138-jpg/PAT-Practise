// #include<iostream>
// #include<vector>
// #include<cstring>
// #include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,len=1000;
    vector<string > strs;
    cin>>N;
    cin.get();
    string kuchiguse ;
    while(N--){
        string t;
        getline(cin,t);
        reverse(t.begin(),t.end());
        if(t.length()<len){
            len = t.length();
        }
        strs.push_back(t);
    }
    for(int i=0;i<len;i++){
        int c=1;
        char t = strs[0][i];
        for(int j=1;j<strs.size();j++){
            if(t==strs[j][i]){
                c++;
            }
        }
        if(c==strs.size()){
            kuchiguse+=t;
        }
        else break;
    }
    if(kuchiguse.size()){
        reverse(kuchiguse.begin(),kuchiguse.end());
        cout<<kuchiguse<<endl;
    }
    else{
        cout<<"nai\n";
    }
    return 0;
}