#include <iostream>
using namespace std;

int A,B,PA,PB,DA,DB;
int main(){
    cin>>A>>DA>>B>>DB;
    while(A>0){
        int temp=A%10;
        if(temp==DA)    PA=PA*10+DA;
        A/=10;
    }
    while(B>0){
        int temp=B%10;
        if(temp==DB)    PB=PB*10+DB;
        B/=10;
    }
   
    cout<<PA+PB;
    return 0;
}