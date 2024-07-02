class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        vector<int> hash(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            if(hash[nums[i]]==0)
                hash[nums[i]]=1;
            else
                return nums[i];
        }
        return 0;
    }
};