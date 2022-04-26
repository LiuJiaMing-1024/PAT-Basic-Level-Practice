#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int a[4] = {0,1,2,3};
    reverse(a+1,a+3);

    for(int i=0;i<4;i++)    cout<< a[i]<<" ";
}