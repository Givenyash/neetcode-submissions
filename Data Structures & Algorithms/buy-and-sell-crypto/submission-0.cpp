class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;  
        int buy = prices[0];

        for(int sell=1; sell<prices.size(); sell++){
            if(buy < prices[sell]){
                int profit = prices[sell] - buy;
                maxProfit = max(maxProfit, profit); 
            }
            else{ 
                buy = prices[sell];
            }
        }
        return maxProfit;
    }
};
