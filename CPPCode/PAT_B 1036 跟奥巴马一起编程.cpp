#include<bits/stdc++.h>

using namespace std;

int main(){
    int length,width;
    char c;
    cin>>length>>c;
    width=round(length*1.0/2);
    string tb (length,c),mid(length,' ');
    mid[0]=c,mid[length-1]=c;
    cout<<tb<<endl;
    while(width-- > 2){
        cout<<mid<<endl;
    }
    cout<<tb<<endl;
    return 0;
}