#include<bits/stdc++.h>

using namespace std;

int main(){
    array<string, 7> DAY = {
        "MON",
        "TUE",
        "WED",
        "THU",
        "FRI",
        "SAT",
        "SUN"
    };
    array<int,14> HH={
        10,11,12,13,14,15,16,17,18,19,20,21,22,23
    };
    int i=0;
    string s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    while(!(s1[i]==s2[i]&&isupper(s1[i])&&s1[i]<='G'))i++;
    cout<<DAY[s1[i++]-'A']+' ';
    while(!(s1[i]==s2[i]&&((isupper(s1[i])&&s1[i]<='N')||isdigit(s1[i]))))i++;
    if(isupper(s1[i])){
        cout<<HH[s1[i]-'A']<<':';
    }
    else{
        cout<<"0"<<s1[i]<<':';
    }
    i=0;
    while(!(isalpha(s3[i])&&s3[i]==s4[i]))i++;
    if(i<10)cout<<"0"<<i<<endl;
    else cout<<i<<endl;
    return 0;
}