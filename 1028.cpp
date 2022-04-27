#include <iostream>
#include <string>
using namespace std;

typedef struct man{
    string name;
    int y,m,d;
    man(string n,int a,int b,int c){
        name=n;
        y=a,m=b,d=c;
    }
}man;
string tname;
int ty,tm,td;

bool isLegal(int y,int m,int d){
    bool flag = true;
    if(y<1814) 
        flag=false;
    else if(y==1814){
        if(m<9) 
            flag = false;
        else if(m==9)
            if(d<6)
                flag = false;
    }

    if(y>2014)
        flag = false;
    else if(y==2014){
        if(m>9)
            flag = false;
        else if(m==9){
            if(d>6)
                flag = false;
        }
    }
    return flag;
}
bool compare(man* a,man* b){
    bool flag = true;
    if(a->y>b->y)   
        flag=false;
    else if(a->y==b->y){
        if(a->m>b->m)   
            flag = false;
        else if(a->m==b->m)
            if(a->d>=b->d)
                flag=false;
        
    }
    return flag;
}

int main(void){
    man *max,*min,*tman;
    int n,count=0;
    cin>>n;

    //读到第一个合法数据
    while(n>0){
        cin>>tname;
        scanf("%d/%d/%d",&ty,&tm,&td);
        n--;
        if(isLegal(ty,tm,td)){
            max =new man(tname,ty,tm,td);
            min = max;
            count++;
            break;
        }
    }
    
    // 开始遍历判断
    for(int i=0;i<n;i++){
        cin>>tname;
        scanf("%d/%d/%d",&ty,&tm,&td);
        if(isLegal(ty,tm,td)){
            tman =new man(tname,ty,tm,td);
            if(compare(tman,max))
                max = tman;
            if(compare(min,tman))
                min=tman;
            count++;
        }
    }
    cout<<count;
    if(count>0)
        cout<<" "<<max->name<<" "<<min->name;

    return 0;
}