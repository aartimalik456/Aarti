#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    void moveZeroes(vector<int>&nums){
        int j=0;
       for(int i=0;i<nums.size();i++){
        if(nums[i] != 0){
            swap(nums[i],nums[j]);
            j++;
        }
       }
    }
};
int main(){
    vector<int>nums={1,0,2,3,0,0,4,5,0,6,7,8,};
    solution s;
    s.moveZeroes(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }

}