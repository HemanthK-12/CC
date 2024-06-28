/*
-- Two - pointer approach
-- We initialize left pointer to 0 and right pointer to 1 and continue til right pointer reaches the ned.
-- If left pointer value(buying price) is lesser than right pointer value(selling price), we find profit and equate to max if more than max.Then increment right;
-- If left pointer value(buying price) is greater than right pointer(selling price), we make left=right(since we got a lower price to buy) and increment right.
*/
class Solution {
public:
    int maxProfit(vector<int>& prices)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
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