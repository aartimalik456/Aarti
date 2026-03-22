#include<iostream>
#include<vector>
using namespace std;
class solution{
    public:
    int maxprofit(vector<int>&prices){
        int maxprofit=0,bestbuy=prices[0];
        for(int i=0;i<prices.size();i++){
            if(prices[i]>bestbuy){
                maxprofit=max(maxprofit,prices[i]-bestbuy);
            }
            bestbuy=min(bestbuy,prices[i]);
        }
        return maxprofit;
    }
};
int main(){
    vector<int>prices={7,1,5,3,6,4};
    solution s;
    int result=s.maxprofit(prices);
    cout<<"Maximum profit is : "<<result<<endl;
    return 0;
}