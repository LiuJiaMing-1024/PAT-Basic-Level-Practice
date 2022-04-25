#include <iostream>
#include <map>
using namespace std;

int a1,a2,a3,b1,b2,b3;//手势赢的局数
int s1,s2,s3,ss1,ss2,ss3;//胜 平 败

map<char,int> mp;
char n,m;
int main(){

    int t;
    cin>>t;
    mp['B'] = 0,mp['J'] =1, mp['C'] =2;//布 剪 锤
    for(int i=0;i<t;i++){
        cin>>n>>m;
        if(n==m)    s2++,ss2++;
        if(mp[n]==0&&mp[m]==2)  a1++,s1++,ss3++;
        if(mp[n]==1&&mp[m]==0)  a2++,s1++,ss3++;
        if(mp[n]==2&&mp[m]==1)  a3++,s1++,ss3++;

        if(mp[m]==0&&mp[n]==2)  b1++,ss1++,s3++;
        if(mp[m]==1&&mp[n]==0)  b2++,ss1++,s3++;
        if(mp[m]==2&&mp[n]==1)  b3++,ss1++,s3++;

    }

    cout<<s1<<" "<<s2<<" "<<s3<<endl;
    cout<<ss1<<" "<<ss2<<" "<<ss3<<endl;

    if(a1>=a2&&a1>=a3)  cout<<"B ";
    else if(a3>=a1&&a3>=a2)   cout<<"C ";
    else cout<<"J ";

    if(b1>=b2&&b1>=b3)  cout<<"B";
    else if(b3>=b1&&b3>=b2)   cout<<"C";
    else cout<<"J";


    return 0;
}