class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        // Input
        // We are given an array of stock prices

        //WHat DS/Algo?Technique

        //Greedy Algorithm

        int minPrice = INT_MAX;
        int maxProfit = 0;

        for(int i = 0; i < prices.size(); i++) {
            if(prices[i] < minPrice) {
                minPrice = prices[i];
                
            } 
            else if(prices[i] - minPrice > maxProfit) {
                maxProfit = prices[i] - minPrice;
            }


        }

        if(maxProfit < 0)
            return 0;

        return maxProfit; 






    }
};