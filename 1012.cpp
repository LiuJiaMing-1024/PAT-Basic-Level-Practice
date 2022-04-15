#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int num;
int a1,a2,a3,a4,a5;
int flag1,flag2,flag3,flag4,flag5;
int cnt1,cnt2;
int main(void){

    scanf("%d",&num);
    for(int i=0;i<num;i++){
        int temp;
        scanf("%d",&temp);
        if(temp%5==0&&temp%2==0)    a1+=temp,flag1=true;
        if(temp%5==1){
            if(cnt1%2==0)   a2+=temp;
            else a2-=temp;
            flag2=true,cnt1++;   
        }
        if(temp%5==2){
            a3++,flag3=true;
        }
        if(temp%5==3){
            a4+=temp,cnt2++,flag4=true;
        }
        if(temp%5==4&&temp>a5){
            a5=temp,flag5=true;
        }
    }
    if(flag1) cout<<a1<<" ";
    else cout<<"N ";
    if(flag2) cout<<a2<<" ";
    else cout<<"N ";
    if(flag3) cout<<a3<<" ";
    else cout<<"N ";
    if(flag4) printf("%.1f ",a4*1.0/cnt2);
    else cout<<"N ";
    if(flag5)   cout<<a5;
    else cout<<"N";

    return 0;


}