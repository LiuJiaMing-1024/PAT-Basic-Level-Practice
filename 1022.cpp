#include <iostream>
#include <math.h>
using namespace std;



void k_print(int t,int k){
    int ans;
    ans=t%k;
    if(t/k>0)   k_print(t/k,k);
    cout<<ans;
    
}
int main(void){
    int m,n,k;
    cin>>m>>n>>k;
    int t = m+n;
    k_print(t,k);
}