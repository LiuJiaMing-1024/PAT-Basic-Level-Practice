#include <iostream>
#include <string>
using namespace std;

int ans[10];
string t;
int temp;
int main(void){
    cin>>t;
    while(t.size()){
       temp=t[t.size()-1]-48;
       ans[temp]++;
       t.erase(t.size()-1);
    }

    for(int i=0;i<10;i++){
        if(ans[i]){
            printf("%d:%d\n",i,ans[i]);
        }
    }
    return 0;
}