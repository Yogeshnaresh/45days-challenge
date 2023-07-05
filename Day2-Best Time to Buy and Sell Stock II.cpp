class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int temp=prices[0];
        
        int sum=0;
        for(int i=1;i<prices.size();i++){
            if(temp<prices[i]){
                sum=sum+prices[i]-temp;
                temp=prices[i];
            }
            else{
                temp=prices[i];
            }
        }
        return sum;
    }
};