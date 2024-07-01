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