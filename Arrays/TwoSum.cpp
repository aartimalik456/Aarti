#include<iostream>
#include<vector>
using namespace std;
class twoSum{
    public:
    int findTwoSum(vector<int>&nums,int target){
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(nums[i]+nums[j]==target){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}

};
int main(){
    vector<int>nums={2,7,11};
    int target=9;
    twoSum s;
    s.findTwoSum(nums,target);
    return 0;

}
