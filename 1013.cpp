#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std; 

int isPrime(int num){
    int flag=1;
    for(int j=2;j<=sqrt(num);j++){
        if(num%j==0){
            flag=0;
            break;
        }
    }
    return flag;
}

int main(void){
    int m,n,cnt=0;
    cin>>m>>n;
    int i=2;
    while(cnt<m){
        if(isPrime(i++))  
            cnt++;
    }    
    i--;
    int enterFlag=0;
    while(cnt<=n){
        if(isPrime(i)) {
            printf("%d",i);
            enterFlag++;
            if(cnt!=n&&enterFlag!=10)    printf(" ");
			if(enterFlag==10)   printf("\n"),enterFlag=0;
			cnt++;
        }
        i++;
    }

    return 0;
}
