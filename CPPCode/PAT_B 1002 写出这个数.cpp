#include<bits/stdc++.h>

using namespace std;

int main(){
    string num;
    int sum=0;
    map<int,string> n_p ;
    n_p[0]="ling";
    n_p[1]="yi";
    n_p[2]="er";
    n_p[3]="san";
    n_p[4]="si";
    n_p[5]="wu";
    n_p[6]="liu";
    n_p[7]="qi";
    n_p[8]="ba";
    n_p[9]="jiu";
    cin>>num;
    for (int i=0;i<num.length();i++){
        sum+=(num[i]-'0');
    }
    string t;
    while(sum){
        t+=sum%10+'0';
        sum/=10;
    }
    reverse(t.begin(),t.end());
    for(int i=0;i<t.length();i++){
        cout<<n_p[t[i]-'0'];
        if(i<t.length()-1)cout<<" ";
    }
    //cout<<endl;
    return 0;
}