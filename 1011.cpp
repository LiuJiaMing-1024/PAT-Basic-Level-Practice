#include <iostream>
using namespace std;

int main(){
    int num,A,B,C;
    cin>>num;
    for(int i=1;i<=num;i++){
        cin>>A>>B>>C;
        printf("Case #%d: ",i);
        if(A+B>C){
            printf("true\n");
        }else{
            printf("false\n"); 
        }
    }
}