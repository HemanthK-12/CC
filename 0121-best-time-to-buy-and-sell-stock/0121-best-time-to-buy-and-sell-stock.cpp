class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        int buy=0;
        int sell=1;
        int max=0;
        while(sell<prices.size())
        {
            if( prices[sell]<prices[buy] )
            {
                buy=sell;
                sell++;
            }
            else
            {
                int profit=prices[sell]-prices[buy];
                if(profit>max)
                    max=profit;
                sell++;
            }

        }
        return max;
        
    }
};