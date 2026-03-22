#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    int maxSum=-100;
    int subArray(vector<int>&nums){
        int n=nums.size();
            for(int i=0;i<n;i++){
                for(int j=i;j<n;j++){
                    int currSum=0;
                    int sum=0;
                    for(int k=i;k<=j;k++){
                        currSum +=nums[k];
                        if(currSum>maxSum){
                            maxSum=currSum;
                        }
                }
            }
            }
            cout<<maxSum<<endl;
            }
};
int main(){
    vector<int>nums={1,2,3};
    solution s;
    s.subArray(nums);
    return 0;
}