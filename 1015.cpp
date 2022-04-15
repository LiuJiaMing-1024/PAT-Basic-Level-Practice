#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Student{
    public:
        int number;
        int ethicPoint;
        int skillPoint;
        int total;
        Student(int number,int ethicPoint,int skillPoint){
            this->number=number;
            this->ethicPoint=ethicPoint;
            this->skillPoint=skillPoint;
            this->total=ethicPoint+skillPoint;
        }
};
bool Student_Compare(Student s1,Student s2){            
            if(s1.total==s2.total){
                if(s1.ethicPoint==s2.ethicPoint)    return s1.number<s2.number;
                return s1.ethicPoint>s2.ethicPoint;
            }
            return s1.total>s2.total;
}


int main(){
    int N,L,H;
    cin>>N>>L>>H;
    vector<Student> s1,s2,s3,s4;
    int cnt=0;
    for(int i=0;i<N;i++){
        int number,ethicPoint,skillPoint;
        cin>>number>>ethicPoint>>skillPoint;
        Student temp(number,ethicPoint,skillPoint);
        if(temp.ethicPoint>=L&&temp.skillPoint>=L){
            cnt++;
            if(temp.ethicPoint>=H&&temp.skillPoint>=H)  
                s1.push_back(temp);//才德兼备
            else if(temp.ethicPoint>=H&&temp.skillPoint<H)   
                s2.push_back(temp);//德胜才
            else if(temp.ethicPoint>=temp.skillPoint)  
                s3.push_back(temp);//才德兼亡但德胜才者
            else 
                s4.push_back(temp);
        }
    }
        sort(s1.begin(),s1.end(),Student_Compare);
        sort(s2.begin(),s2.end(),Student_Compare);
        sort(s3.begin(),s3.end(),Student_Compare);
        sort(s4.begin(),s4.end(),Student_Compare);
        printf("%d\n",cnt);
        for(int i=0;i<s1.size();i++) cout<<s1[i].number<<" "<<s1[i].ethicPoint<<" "<<s1[i].skillPoint<<endl;
        for(int i=0;i<s2.size();i++) cout<<s2[i].number<<" "<<s2[i].ethicPoint<<" "<<s2[i].skillPoint<<endl;
        for(int i=0;i<s3.size();i++) cout<<s3[i].number<<" "<<s3[i].ethicPoint<<" "<<s3[i].skillPoint<<endl;
        for(int i=0;i<s4.size();i++) cout<<s4[i].number<<" "<<s4[i].ethicPoint<<" "<<s4[i].skillPoint<<endl;

}