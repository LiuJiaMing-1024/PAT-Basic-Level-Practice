#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


class moonpie{
    public:
        double num;//总量
        double tp;//总价
        double sp;//单价
};

bool moospie_compare(moonpie& a,moonpie& b){
    if(a.sp>=b.sp) return true;
    return false;
}

int main(void){
    int mnum,mp;//月饼类型总量，月饼市场需求量
    cin>>mnum>>mp;
    vector<moonpie> ms;
    for(int i=0;i<mnum;i++){
        moonpie temp;
        ms.push_back(temp);
    }
    for(int i=0;i<mnum;i++){
        cin>>ms[i].num;
    }

    for(int i=0;i<mnum;i++){
        cin>>ms[i].tp;
    }
    for(int i=0;i<mnum;i++){
        ms[i].sp=ms[i].tp*1.0/ms[i].num;
    }
    sort(ms.begin(),ms.end(),moospie_compare);

    double profit = 0;
    for(int i=0;i<=mnum;i++){
        if(mp==0) break;
        if(mp>=ms[i].num){
            mp-=ms[i].num;
            profit+=ms[i].tp;
        }else{
            profit=profit+ms[i].sp*mp;
            mp=0;
        }
    }
    printf("%.2f",profit);



    return 0;
}