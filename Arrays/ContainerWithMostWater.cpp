#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    int maxwater(vector<int>&nums){
      int left=0;
      int right=nums.size()-1;
      int maxwater=0;
      while(left<right){
        int h=min(nums[left],nums[right]);
        int width=right-left;
        int area=h*width;
        maxwater=max(maxwater,area);
        if(nums[left]<nums[right]){
            left++;
        }
        else{
            right--;
        }
      }
      return maxwater;
    }
};
int main(){
    vector<int>nums={1,8,6,2,5,4,8,3,7};
    solution s;
    cout<<s.maxwater(nums);
    return 0;
}
