#include <iostream>
#include <string>
using namespace std;

int main(void){
    string s;
    int denominator;
    cin>>s>>denominator;
    int t2=0;
    for(int i=0;i<s.size();i++){
        int t1 = s[i]-'0',ans;
        t2 = t2*10+t1;
        if(t2>=denominator)   ans=t2/denominator,t2-=ans*denominator,cout<<ans;
        else if(t2<denominator&&i!=0)   cout<<0;
        else if(t2<denominator&&s.size()==1) cout<<0;
    }

    cout<<" "<<t2;
    

    return 0;
}