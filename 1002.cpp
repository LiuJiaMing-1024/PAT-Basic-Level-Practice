#include <stdio.h>

const char *s[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};

void printSum(int sum,int cnt){
	int flag=0;
	if(sum==0)	printf(s[0]);
	else{
		if((sum/10)>0)
			printSum(sum/10,cnt+1);
		printf(s[sum%10]);
		if(cnt!=1)
			printf(" ");
	}
}
int main(){
	char  c;
	scanf("%c",&c);
	int sum=0;
	while(c!='\n'){
		sum+=c-48;
		scanf("%c",&c);	
	}
	int cnt=1;
	printSum(sum,cnt);
}


