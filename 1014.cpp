
#include <iostream>
#include <string>
using namespace std;

string s1,s2,s3,s4;
string d[7] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
int main(void){
    cin>>s1>>s2>>s3>>s4;
    bool flag1=false,flag2=false;
    for(int i=0;i<s1.size()&&i<s2.size();i++){
        if(!flag1&&s1[i]>='A'&&s1[i]<='G'&&s1[i]==s2[i]){
            cout<<d[s1[i]-'A']<<" ";
            flag1 = true;
            continue;
        }
        if(flag1&&!flag2&&s1[i]==s2[i]&&s1[i]>='A'&&s1[i]<='N')
            printf("%02d:",s1[i]-'A'+10),flag2=true;
        if(flag1&&!flag2&&s1[i]==s2[i]&&s1[i]>='0'&&s1[i]<='9')
            printf("%02d:",s1[i]-'0'),flag2=true;       
    }

    for(int i=0;i<s3.size()&&i<s4.size();i++){
        if(s3[i]==s4[i]&&((s3[i]>='A'&&s3[i]<='Z')||(s3[i]>='a'&&s3[i]<='z'))){
            printf("%02d",i);
            break;
        }
    }
    return 0;
}