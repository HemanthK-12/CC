class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int sum;
        int max=INT_MIN;
        int n=nums.size();

        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=nums[j];
                if(sum>max)
                    max=sum;
            }
        }
        return max;
    }
};
