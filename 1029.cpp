#include <iostream>
using namespace std;
int flag[200];
int main(void){
    char p[100];
    char q[100];
    for(int i=0;i<200;i++)  flag[i]=1;
    cin>>p>>q;
    int i=0,j=0;
    while(q[j]!='\0'){

        if(p[i]==q[j]){
            i++,j++;
        }else{
            if(p[i]>='a'&&p[i]<='z')    p[i]=p[i]+'A'-'a';
            if(flag[p[i]]){
                cout<<p[i];
                flag[p[i]]=0;
            }
            i++;
        }

    }

    while(p[i]!='\0'){
        if(p[i]>='a'&&p[i]<='z')    p[i]=p[i]+'A'-'a';
        if(flag[p[i]]){
            cout<<p[i];
        }
        i++;
    }
}