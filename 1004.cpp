#include <iostream>
#include <stdlib.h>
using namespace std;

class student{
	public:
		student(int score=0):score(score){
			name = (char *)malloc(sizeof(char)*30);
			number = (char *)malloc(sizeof(char)*30);
		};
		void print();
			
		char *name;
		char *number;
		int score;
};



void student::print(){
	cout<<name<<" "<<number<<endl;
}

int main(){
	int n;
	cin>>n;
	student s[n];
	student *max=&s[0],*min=&s[0];
	for(int i=0;i<n;i++){
		cin>>s[i].name;
		cin>>s[i].number;
		cin>>s[i].score;
		if(s[i].score>max->score) max=&s[i];
		if(s[i].score<min->score) min=&s[i];
	}
	max->print();
	min->print();
}
