#include<bits/stdc++.h>

using namespace std;

int main(){
    int mp[6]={0};
    while(char c = getchar()){
        if(!isalpha(c))break;
        switch (c){
            case 'P':mp[0]++;break;
            case 'A':mp[1]++;break;
            case 'T':mp[2]++;break;
            case 'e':mp[3]++;break;
            case 's':mp[4]++;break;
            case 't':mp[5]++;break;
        }
        
    }
    bool f = true;
    string s = "PATest";
    while(f){
        f = false;
        for(int i=0;i<6;i++){
            if(mp[i]){
                mp[i]--;
                cout<<s[i];
                f=true;
            }
        }
    }
    cout<<endl;
    return 0;
}