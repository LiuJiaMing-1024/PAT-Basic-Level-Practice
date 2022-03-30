#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int x,n;
	char flag=1;



	scanf("%c",&flag);
	while(flag!='\n'){
		scanf("%d %d",&x,&n);
		x*=n;
		n--;
		printf("%d %d",x,n);
	
		scanf("%c",&flag);
		if(flag!='\n')	printf(" ");
		else	break;
	}
}
