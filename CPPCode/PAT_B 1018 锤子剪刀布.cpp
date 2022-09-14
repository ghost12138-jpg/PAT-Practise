#include<bits/stdc++.h>

using namespace std;

int main(){
    int N=0,S=0,F=0,P=0,C1=0,J1=0,B1=0,C2=0,B2=0,J2=0;
    cin>>N;
    cin.get();
    while(N){
        N--;
        string t ;
        getline(cin,t);
        if(t[0]=='B'&&t[2]=='C'){S+=1;B1+=1;}
        else if(t[0]=='B'&&t[2]=='B'){P++;}
        else if(t[0]=='B'&&t[2]=='J'){F++;J2++;}
        else if(t[0]=='C'&&t[2]=='C'){P++;}
        else if(t[0]=='C'&&t[2]=='B'){F++;B2++;}
        else if(t[0]=='C'&&t[2]=='J'){S++;C1++;}
        else if(t[0]=='J'&&t[2]=='C'){F++;C2++;}
        else if(t[0]=='J'&&t[2]=='B'){S++;J1++;}
        else if(t[0]=='J'&&t[2]=='J'){P++;}
    }
    cout<<S<<' '<<P<<' '<<F<<endl<<F<<' '<<P<<' '<<S<<endl;
    if(B1>=C1&&B1>=J1)cout<<"B ";
    else if(C1>B1&&C1>=J1)cout<<"C ";
    else if(J1>B1&&J1>C1)cout<<"J ";
    if(B2>=C2&&B2>=J2)cout<<"B\n";
    else if(C2>B2&&C2>=J2)cout<<"C\n";
    else if(J2>B2&&J2>C2)cout<<"J\n";
    return 0;
}