#include <stdio.h>
#include <math.h> 
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

int main(){
    int m,n,cnt=0;
    scanf("%d %d",&m,&n);
    int i=2;
    while(cnt<m)    if(isPrime(i++))  cnt++;
    i--;
    int flag=0;
    while(cnt<=n){
        if(isPrime(i)) {
            printf("%d",i);
            if(cnt!=n&&flag!=10)    printf(" ");
			flag++;
			if(flag==10){
                printf("\n");
                flag=0;
            } 
			cnt++;
        }
        i++;
    }
    printf("\n");
}
