#include <iostream>
#include <stdlib.h>
using namespace std;

int pattern(char *s){
	char *p = s;
	int flag=1;
	int cnt1,cnt2,cnt3;
	cnt1=cnt2=cnt3=0;
	//遍历起始位置-P第一次出现的位置 
	while(*p!='\0'&&*p!='P'){
		//当前字母不是P或A，或者当前字母是T(顺序颠倒)，则该串有问题 
		if((*p!='P'&&*p!='A')||*p=='T'){
			flag = 0;
			break;
		}
		if(*p=='A')	cnt1++; 
		p++;
	}
	//判断是否出现问题或没找到P 
	if(!flag||*p!='P'){
		flag=0;
		return flag;
	}
	p++;
	//P-T
	while(*p!='\0'&&*p!='T'){
		if((*p!='T'&&*p!='A')||*p=='P'){
			flag = 0;
			break;
		}
		if(*p=='A')	cnt2++;
		p++; 
	}
	if(!flag||*p!='T'){
		flag=0;
		return flag;
	}
	p++;
	//T-末尾
	while(*p!='\0'){
		if(*p!='A'){
			flag = 0;
			break;
		}
		if(*p=='A')	cnt3++;
		p++; 
	}
	if(!flag)	return flag;
	
	//走到这里说明P和T顺序没有颠倒，接下来判断A的数量是否符合要求 
	if(cnt1*cnt2!=cnt3||(cnt1==0&&cnt2==0&&cnt3==0)||((cnt1>0||cnt3>0)&&cnt2==0)){
		//分别对应三种A数量不合规矩的情况，分别为左*中！=右，A数量为零，有A但不是A并非在中间出现
		flag=0;
	}
	return flag;	
}

int main(){
	int n;
	cin>>n;
	char *s[n];
	for(int i=0;i<n;i++)	s[i] = (char *)malloc(sizeof(char)*101);
	for(int i=0;i<n;i++){
		cin>>s[i];
		if(pattern(s[i]))	cout<<"YES"<<endl;	
		else cout<<"NO"<<endl;

	}
}
