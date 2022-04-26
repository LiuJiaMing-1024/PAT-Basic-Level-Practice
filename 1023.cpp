#include <iostream>
using namespace std;

int a[10];
int main(void){
    for(int i=0;i<10;i++)  cin>>a[i];
    for(int i=0;i<10;i++){
        if(i&&a[i]){
            cout<<i;
            a[i]--;
            break;
        }
    }

    for(int i=0;i<10;i++) while(a[i]) cout<<i,a[i]--;
}