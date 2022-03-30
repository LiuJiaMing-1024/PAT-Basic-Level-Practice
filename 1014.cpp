// 我们约会吧！ 
// 3485djDkxh4hhGE 
// 2984akDfkkkkggEdsb 
// s&hgsfdk 
// d&Hyscvnm

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    char p[61],q[61],s[61],t[61];
    scanf("%s",p); 
    scanf("%s",q);   
    scanf("%s",s);
    scanf("%s",t);
    int i=0;
    char day;
    int hour,minute;
    //找day
    while(p[i]!='\0'&&q[i]!='\0'){
        if(p[i]==q[i]&&p[i]>='A'&&p[i]<='G'){
            day=p[i];
            break;
        }
        i++;
    }
    //找hour
    i++;
     while(p[i]!='\0'&&q[i]!='\0'){
        if(p[i]==q[i]&&p[i]>='0'&&p[i]<='9'){
            hour=p[i]-'0';
            break;
        } 
        if(p[i]==q[i]&&p[i]>='A'&&p[i]<='E'){
            hour=p[i]-'A'+10;
            break;
        }
        i++;
    }
    //找minute
    i=0;
    while(s[i]!='\0'&&(s[i]!=t[i]||s[i]<='a'||s[i]>='z')){
        i++;
    }
    minute=i;
    std::map<char,char*> d={{'A',"MON"},
                            {'B',"TUE"},
                            {'C',"WED"},
                            {'D',"THU"},
                            {'E',"FRI"},
                            {'F',"SAT"},
                            {'G',"SUN"}
                            };
    printf("%s ",d[day]);
    printf("%02d:%02d",hour,minute);
    
}