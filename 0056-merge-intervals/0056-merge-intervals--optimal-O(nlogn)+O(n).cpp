/*
-- We first push the first element into the final array.
-- Then for each element we see whether the starting element is less than the final element of the array and if yes we update the ending limit of the array to the maximum of these two elements.
-- We do this for all the elements in the intervals array.
-- O(nlogn)+O(n)
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
        final.push_back(intervals[0]);
        for(int i=1;i<n;i++)
        {
            int start=intervals[i][0];
            int end=intervals[i][1];
            if(start<=final.back()[1])
                final.back()[1]=max(final.back()[1],end);
            else
                final.push_back(intervals[i]);            
        }
        return final;
    }
};