//Just take every pair of elements and see which profit is max
//O(n^2)
class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int max=0;
        for(int i=0;i<prices.size();i++)
        {
            for(int j=i+1;j<prices.size();j++)
            {
                int profit=prices[j]-prices[i];
                if(profit>max)
                    max=profit;
            }
        }
        return max;
        
    }
};
