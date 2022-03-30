#include <stdio.h>
#include <math.h>
int nextPrime(int n){
	n++;
	int flag=1;
	while(flag){
		flag = 1;
		for(int i=2;i<=sqrt(n);i++)
			if(n%i==0)	{
				flag=0;	
				break;
			}
		if(flag) break;
		else flag=1;
		n++;
	}
	return n;
}

int main(){
	int limit;
	scanf("%d",&limit);
	int p1=2;
	int p2=3;
	int d=p2-p1;
	int cnt=0;
	while(p2<=limit){
		if(d==2)
			cnt++;
		p1=p2;
		p2=nextPrime(p2);
		d=p2-p1;
	}
	printf("%d",cnt);
}
