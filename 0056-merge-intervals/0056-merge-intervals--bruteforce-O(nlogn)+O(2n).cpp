/*
-- We first sort the array to get all nearby intervals together.
-- Then, we first check if the selected interval is already covered by another interval and if yes, it skips this.
-- Otherwise, it checks, in 1,2 & 3,4 if 3<2 and if yes, then push 3,max(2,4) to final array.we use max(2,4 to account for both cases of intervals which are inside another and intervals which extend from another)
-- If no, then it breaks.After breaking, it pushes start and new end to final array.
-- This continues for all elements in the array.
-- O(nlogn)+O(2n) [NOT O(n^2) because of continue and break, write and check once how many times each element is getting accessed]
*/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals)
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        int n=intervals.size();
        vector<vector<int>> final;
        sort(intervals.begin(),intervals.end());
        
        for(int i=0;i<n;i++)
        {
            int start=intervals[i][0];
            int end=intervals[i][1];
            if(!final.empty() && end<=final.back()[1])
            {
                continue;
            }
            for(int j=i+1;j<n;j++)
            {
                if(intervals[j][0]<=end)
                    end=max(end,intervals[j][1]);
                else
                    break;
            }
            final.push_back({start,end});
        }
        return final;
    }
};