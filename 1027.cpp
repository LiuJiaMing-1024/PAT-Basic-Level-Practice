#include <iostream>
using namespace std;
//*****
// ***
//  *
// ***
//*****

int n;
char c;
int main(void){
    int flag=1;
    cin>>n>>c;
    n++;
    int lines =0,max=1;
    while(n>0&&n>=max*2){
        n-=2*max;
        max+=2;
        lines++;
    }
    max-=2;
    lines = 1+(lines-1)*2;
    //开始打印
    int blank=0;
    for(int i=1;i<=lines;i++){
        for(int i=0;i<blank;i++){
            cout<<" ";
        }

        for(int k=max;k>0;k--)  
            cout<<c;
        if((lines+1)/2==i)  
            flag=-flag;
        blank+=flag;
        max-=flag*2;
        cout<<endl;
    }
    cout<<n;
    return 0;
}