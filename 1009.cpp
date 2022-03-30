#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	char *s[20];
	int cnt=0;
	s[cnt] =(char *)malloc(sizeof(char)*20);
	cin>>s[cnt++];
	char flag;
	scanf("%c",&flag);
	while(flag!='\n'){
		s[cnt] = (char *)malloc(sizeof(char)*20);
		cin>>s[cnt++];
		scanf("%c",&flag);
	}
	
	for(int i=cnt-1;i>=0;i--){
		cout<<s[i];
		if(i!=0)	cout<<" ";
	}
}
