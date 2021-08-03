//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int max = 0;
        int sum = 0;
        int n = (int)prices.size();
        
        for(int i = 1; i<n; i++)
        {
            sum += prices[i] - prices[i-1];
            
            if(sum > max)
            {
                max = sum;
            }
            if(sum < 0)
            {
                sum = 0;
            }
                
        }
        
        return max;
        
    }
};
