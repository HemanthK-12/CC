class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int sum;
        int global=INT_MIN;
        int local=0;

        for(int i=0;i<n;i++)
        {
            local=max(nums[i],nums[i]+local);
            if(local>global)
                global=local;
            
        }
        return global;
    }
};
