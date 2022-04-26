#include <iostream>
#include <string>
using namespace std;


string exrp,eexrp,num;
double ans;
char flag1,flag2;
int main(void){

    cin>>exrp;
    exrp.erase(2,1);//删除小数点
    flag1=exrp[0];
    exrp.erase(0,1);//删除首位正负号

    int eindex = exrp.find('E');//标记表达式中E的位置
    flag2 = exrp[eindex+1];
    exrp.erase(eindex+1,1);//删除指数位正负号

    eexrp = exrp.substr(eindex+1);
    int e = stoi(eexrp);//分割出指数位

    num = exrp.substr(0,eindex);


    if(flag1=='-')  cout<<'-';
    if((num.size()-1)<=e&&flag2=='+')   {
        cout<<num;
        for(int i=e-num.size();i>=0;i--)    cout<<0;
    }
    if((num.size()-1)>e&&flag2=='+'){
        num.insert(e+1,1,'.');
        cout<<num;
    }
    if(flag2=='-'){
        cout<<"0.";
        for(int i=e;i>1;i--)    cout<<0;
        cout<<num;
    }
}

