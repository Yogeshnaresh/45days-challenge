class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int temp=prices[0];
        int ans=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>temp){
                if(ans<prices[i]-temp){
                    ans=prices[i]-temp;
                }
            }
            else{
                temp=prices[i];
            }
        }
        return ans;
    }
};