#include <stdio.h>
int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	
	int a[n];
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);

	m%=n;
	int newIndex;
	for(int i=0;i<n;i++){
		newIndex=(i+n-m)%n;
		printf("%d",a[newIndex]);
		if(i!=n-1)	printf(" ");
	}
	
	
}
