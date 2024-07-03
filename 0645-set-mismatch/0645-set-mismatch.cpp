class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums)
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        
        vector<int> hash(nums.size());
        vector<int> final;

        for(int i=0;i<nums.size();i++)
        {
            if(hash[nums[i]-1]==0)
                hash[nums[i]-1]++;
            else if(hash[nums[i]-1]==1)
                final.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
            if(hash[i]==0)
                final.push_back(i+1);
        return final;
        
    }
};