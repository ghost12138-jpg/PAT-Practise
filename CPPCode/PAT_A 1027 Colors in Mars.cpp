#include<bits/stdc++.h>

using namespace std;

string to13radix(int t){
    map<int, string> d;
    d[10]="A";
    d[11]="B";
    d[12]="C";
    vector<int> num;
    do{
        num.push_back(t%13);
        t/=13;
    }while(t);
    string res;
    for(auto i = num.rbegin();i!=num.rend();i++){
        if((*i)>=10){
            res+=d[(*i)];
        }
        else{
            res+=to_string((*i));
        }
    }
    if(res.size()<2){
        string t(2-res.size(),'0');
        res+=t;
        reverse(res.begin(),res.end());
    }
    return res;
}

int main(){
    int R,G,B;
    cin>>R>>G>>B;
    cout<<'#'+to13radix(R)+to13radix(G)+to13radix(B)<<endl;
       
    return 0;
}