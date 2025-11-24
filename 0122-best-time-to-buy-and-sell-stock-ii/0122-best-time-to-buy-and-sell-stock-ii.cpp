class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // buy the every low and the sell the next high

        int profit = 0 ;

        for ( int i = 1 ; i < prices.size() ; i++ ) {
            if ( prices[i-1]  < prices[i] ) {
                profit += prices[i] - prices[i-1];
            }
        }
        return profit;
    }
};