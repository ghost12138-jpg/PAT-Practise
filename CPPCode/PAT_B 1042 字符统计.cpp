#include<bits/stdc++.h>

using namespace std;

int main(){
    int mp[26]={0};
    while(char c = getchar()){
        if(c=='\n')break;
        if(c>='A'&&c<='Z'){
            c = c-'A'+'a';
        }
        if(c>='a'&&c<='z'){
            mp[c-'a']++;
        }
    }
    int m=0;
    for(int i=1; i<26; i++){
        if(mp[i]>mp[m]){
            m=i;
        }
    }
    cout<< char('a'+m)<<' '<<mp[m]<<endl;
    return 0;
}