class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int i=0;
        int j=0;
        int profit = INT_MIN;

        while(j<n){
            if(prices[i] > prices[j]){
                i = j;
            }
            profit = max((prices[j] - prices[i]),profit);
            j++;
        }
        return profit;
    }
};
