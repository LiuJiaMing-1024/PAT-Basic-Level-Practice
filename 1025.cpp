#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


typedef struct node{
    int address;
    int data;
    int next;
}node;

int headAdd,tempAdd,tempData,tempNext;
int nodenum,reverseNum;
int main(void){

    cin>>headAdd>>nodenum>>reverseNum;
    node nodes[nodenum];
    for(int i=0;i<nodenum;i++){
        cin>>tempAdd>>tempData>>tempNext;

        if(tempAdd>=0){
            nodes[i].address = tempAdd;
            nodes[i].data = tempData;
            nodes[i].next = tempNext;
        }
    }

    //开始排序
    for(int i=0;i<nodenum-1;i++){
        for(int j=i;j<nodenum;j++){
            if(nodes[j].address==headAdd){
                node temp = nodes[j];
                nodes[j] = nodes[i];
                nodes[i] = temp;
                break;
            }
        }
        headAdd = nodes[i].next;
        if(headAdd==-1){
            nodenum=i+1;
            break;
        }
        
    }

    //排序完成，开始反转
    for(int i=0;i+reverseNum<=nodenum;i+=reverseNum){
        reverse(nodes+i,nodes+i+reverseNum);    
    }

    //修改next
    for(int j=0;j<nodenum-1;j++){
        nodes[j].next = nodes[j+1].address;
    }
    nodes[nodenum-1].next = -1;

    for(int j=0;j<nodenum-1;j++){
        printf("%05d %d %05d\n",nodes[j].address,nodes[j].data,nodes[j].next);
    }
    printf("%05d %d -1\n",nodes[nodenum-1].address,nodes[nodenum-1].data);
    return 0;
}
