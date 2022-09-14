#include<bits/stdc++.h>

using namespace std;

int main(){
    string num;
    cin>>num;
    long long sum=0;
    array<string, 10> words ={
        "zero","one","two","three","four","five","six","seven","eight","nine"
    };
    for(auto i: num){
        sum += i - '0';
    }
    num = to_string(sum);
    cout<<words[num[0]-'0'];
    for(int i=1;i<num.size();i++){
        cout<<' '+words[num[i]-'0'];
    }
    cout<<endl;
    return 0;
}