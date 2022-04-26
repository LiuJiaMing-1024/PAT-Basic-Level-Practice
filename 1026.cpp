#include <iostream>
using namespace std;

int a,b;

int main(void){
    cin>>a>>b;
    double tt =(b-a)*1.0/100;
    int t = tt*10;
    t%=10;
    if(t>=5)    t = tt+1;
    else t=tt;


    printf("%02d:%02d:%02d",t/3600,(t%3600)/60,(t%3600)%60);


    return 0;
}