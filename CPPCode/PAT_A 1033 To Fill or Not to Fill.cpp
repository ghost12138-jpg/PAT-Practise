#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<double,double> a, pair<double,double> b){
    return a.second < b.second;    
}

int main(){
    double CMAX,D,DAVG,N;
    scanf("%lf%lf%lf%lf",&CMAX,&D,&DAVG,&N);
    vector< pair<double, double> > inf(N);
    for(int i=0;i<N;i++){
        scanf("%lf %lf",&inf[i].first,&inf[i].second);
    }
    sort(inf.begin(),inf.end(),cmp);

    double totalcost = 0, distance = 0, currentstation = 0, currentgas = 0;
    if(inf[0].second>0.000001){
        //针对测试点2的特判， 即出发点没有加油站
        printf("The maximum travel distance = 0.00\n");
        return 0;
    }
    while(currentstation<N){
        int maxdistance = inf[currentstation].second + CMAX * DAVG,
        minindex = currentstation+1, f = 0;
        //找到之后最实惠的加油站
        for(int i=currentstation+1;i<N;i++){
            if(inf[i].second > maxdistance ){
                
                break;
            }
            else if(inf[minindex].first<inf[currentstation].first){
                f=1;
                break;
            }
            else if(inf[i].first < inf[minindex].first){
                minindex = i;
            }
        }
        
        if(f==0 && maxdistance > D){
            //若之后没有更实惠加油站，且可以跑完全程
            if(currentgas*DAVG < D-inf[currentstation].second)
                totalcost += ((D-inf[currentstation].second) * 1.0/ DAVG - currentgas)*inf[currentstation].first;
            printf("%.2lf\n",totalcost);
            break;
        } else if( currentstation == N-1){
            //若到了最后一个加油站
            distance = maxdistance;
            printf("The maximum travel distance = %.2lf\n",distance);
            break;
        }
        else if(f==0){
            //之后可以跑到的加油站比现在的更贵
            totalcost += (CMAX- currentgas) * 1.0 * inf[currentstation].first;
            currentgas=CMAX - (inf[minindex].second - inf[currentstation].second)*1.0/DAVG ;
            currentstation =minindex;
        }
        else {//if(inf[currentstation].first > inf[minindex].first){
            //可以跑到比当前更实惠的加油站
            distance = inf[minindex].second;
            if(currentgas*DAVG < inf[minindex].second-inf[currentstation].second){
                totalcost += ((inf[minindex].second-inf[currentstation].second)/(1.0*DAVG) - currentgas) * 1.0 * inf[currentstation].first;
                currentgas = 0;
            }else{
                currentgas -= (inf[minindex].second-inf[currentstation].second)/(1.0*DAVG);
            }
            currentstation = minindex;
        }
    }
    return 0;
}