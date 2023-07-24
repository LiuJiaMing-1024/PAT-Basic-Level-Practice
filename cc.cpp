#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
//修改了点东西
    bool isIdealPermutation(vector<int>& nums) {
        int maxNum=nums[0];
        for(int i=2;i<nums.size();i++){
            if(maxNum>nums[i])return false;
            maxNum=max(maxNum,nums[i-1]);
        }
        return true;
    }


int main(){
    vector<int> v;
    v.push_back();
    if(isIdealPermutation(v))
        cout<<1;
    vector<int> v1{}
}
