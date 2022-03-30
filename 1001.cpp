#include <stdio.h>
//递归版本 
//int Callatz(int i){
//	static int step = 0;
//	if(i==1)	return step;
//	else{
//		step++;
//		if(i%2==0)	Callatz(i/2);
//		else Callatz((3*i+1)/2);
//	}
//}

//非递归版本
int Callatz(int i){
	int step=0;
	while(i!=1){
		if(i%2==0)	i/=2;
		else i=(3*i+1)/2;
		step++;
	} 
	return step;
} 
int main(){
	int i;
	scanf("%d",&i);
	printf("%d",Callatz(i));
} 

