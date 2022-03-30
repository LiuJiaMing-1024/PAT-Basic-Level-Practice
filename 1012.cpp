#include <stdio.h>


int main(){
    int num;
    scanf("%d",&num);
    float a1=0,a2=0,a3=0,a4=0,a5=0;
    int flag=1;//给a2交错求和
    int count=0;//给a4计数
    for(int i=0;i<num;i++){
        int temp;
        scanf("%d",&temp);
        if(temp%5==0&&temp%2==0)
            a1+=temp;
        else if(temp%5==1){
            a2+=temp*flag;
            flag=-flag;
        }else if(temp%5==2){
            a3++;
        }else if(temp%5==3){
            a4+=temp;
            count++;
        }else if(temp%5==4&&temp>a5){
            a5=temp;
        }
    }
    if(count!=0)  a4/=count;
    printf(a1!=0?"%.0f ":"N ",a1);
    printf(a2!=0?"%.0f ":"N ",a2);
    printf(a3!=0?"%.0f ":"N ",a3);
    printf(a4!=0?"%.1f ":"N ",a4);
    printf(a5!=0?"%.0f ":"N ",a5);


}