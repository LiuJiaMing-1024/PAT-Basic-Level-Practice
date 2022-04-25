#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string s,t;

int main(){
    cin >>s;

    while(1){
        while(s.size()<4)   s= '0'+s;
        sort(s.begin(),s.end());
        t=s;
        reverse(s.begin(),s.end());//s递减，t递增
        int temp1=stoi(s),temp2=stoi(t);
        if(temp1-temp2==0)  
        {
            printf("%04d - %04d = 0000\n",temp1,temp2);
            break;
        }
        if(temp1-temp2==6174)   
        {
            printf("%04d - %04d = 6174\n",temp1,temp2);
            break;
        }
        printf("%04d - %04d = %04d\n",temp1,temp2,temp1-temp2);
        s=to_string(temp1-temp2);

    }
    return 0;
}