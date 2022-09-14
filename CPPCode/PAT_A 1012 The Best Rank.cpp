#include<bits/stdc++.h>

using namespace std;

class student{
    public:
    int ID,C,M,E,A,br;
    char subject;
    student(){}
    student(int id,int c,int m,int e){
        ID = id;
        C = c;
        M = m;
        E = e;
        A = c+m+e;
        br = 2001;
    }
};

void my_sorts(array<student,2001> &stu, int start, int end,char subject){
    if(end-start<2||start<0||end>2000)return;
    student t = stu[start];
    int i = start,j = end-1;
    switch (subject){
        case 'A':
            while(j>i){
                while(j>i&&t.A>stu[j].A)j--;
                if(j>i)stu[i++]=stu[j];
                while(j>i&&t.A<stu[i].A)i++;
                if(j>i)stu[j--]=stu[i];
            }
            break;
        case 'C':
            while(j>i){
                while(j>i&&t.C>stu[j].C)j--;
                if(j>i)stu[i++]=stu[j];
                while(j>i&&t.C<stu[i].C)i++;
                if(j>i)stu[j--]=stu[i];
            }
            break;
        case 'M':
            while(j>i){
                while(j>i&&t.M>stu[j].M)j--;
                if(j>i)stu[i++]=stu[j];
                while(j>i&&t.M<stu[i].M)i++;
                if(j>i)stu[j--]=stu[i];
            }
            break;
        case 'E':
            while(j>i){
                while(j>i&&t.E>stu[j].E)j--;
                if(j>i)stu[i++]=stu[j];
                while(j>i&&t.E<stu[i].E)i++;
                if(j>i)stu[j--]=stu[i];
            }
            break;
    }
    stu[i]=t;
    my_sorts(stu,start,i,subject);
    my_sorts(stu,i+1,end,subject);
}

void use_my_sorts(array<student,2001> &stu, int start, int end,char subject){
    my_sorts(stu,start,end,subject);
    switch (subject){
        case 'A':
            for(int i=start;i<end;i++){
                if(i==0&&stu[i].br>i+1){
                    stu[i].br = i+1;
                    stu[i].subject = subject;
                }
                else if(stu[i].br>i+1){
                    if(stu[i].A==stu[i-1].A){
                        stu[i].br = stu[i-1].br;
                    }
                    else{
                        stu[i].br = i+1;
                    }
                    stu[i].subject = subject;
                }
            }
            break;
        case 'C':
            for(int i=start;i<end;i++){
                if(i==0&&stu[i].br>i+1){
                    stu[i].br = i+1;
                    stu[i].subject = subject;
                }
                else if(stu[i].br>i+1){
                    if(stu[i].C==stu[i-1].C){
                        stu[i].br = stu[i-1].br;
                    }
                    else{
                        stu[i].br = i+1;
                    }
                    stu[i].subject = subject;
                }
            }
            break;
        case 'M':
            for(int i=start;i<end;i++){
                if(i==0&&stu[i].br>i+1){
                    stu[i].br = i+1;
                    stu[i].subject = subject;
                }
                else if(stu[i].br>i+1){
                    if(stu[i].M==stu[i-1].M){
                        stu[i].br = stu[i-1].br;
                    }
                    else{
                        stu[i].br = i+1;
                    }
                    stu[i].subject = subject;
                }
            }
            break;
        case 'E':
            for(int i=start;i<end;i++){
                if(i==0&&stu[i].br>i+1){
                    stu[i].br = i+1;
                    stu[i].subject = subject;
                }
                else if(stu[i].br>i+1){
                    if(stu[i].E==stu[i-1].E){
                        stu[i].br = stu[i-1].br;
                    }
                    else{
                        stu[i].br = i+1;
                    }
                    stu[i].subject = subject;
                }
            }
            break;
    }
}

int main(){
    int N,M;
    scanf("%d%d",&N,&M);
    int n = N;
    array<student,2001> stu;
    while(N--){
        int id,c,m,e;
        scanf("%d%d%d%d",&id,&c,&m,&e);
        stu[N] = student(id,c,m,e);
    }
    use_my_sorts(stu,0,n,'A');
    use_my_sorts(stu,0,n,'C');
    use_my_sorts(stu,0,n,'M');
    use_my_sorts(stu,0,n,'E');
    while(M--){
        int f=0,id;
        scanf("%d",&id);
        for(int i=0;i<n;i++){
            if(stu[i].ID==id){
                f=1;
                printf("%d %c\n",stu[i].br,stu[i].subject);
            }
        }
        if(!f){
            printf("N/A\n");
        }
    }
    return 0;
}