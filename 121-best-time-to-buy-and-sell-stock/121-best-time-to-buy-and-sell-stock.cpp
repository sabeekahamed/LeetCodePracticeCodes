class Solution {
public:
    int maxProfit(vector<int>& prices) {
        /*O(N^2) - Time limit exceeded
        int maxProfit = 0;
        for(int i=0;i<prices.size();i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
                maxProfit = std::max(maxProfit,prices[j]-prices[i]);
            }
        }
        return maxProfit;
        */
        int minPrice=prices[0],maxProfit=0;
        for(int i=1;i<prices.size();i++)
        {
            if(minPrice > prices[i])
                minPrice = prices[i];
            else
                maxProfit = std::max(maxProfit,prices[i]-minPrice);
        }
        return maxProfit;
    }
};