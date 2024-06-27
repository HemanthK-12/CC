/*
-- Here, I just used bubble sort to sort through the elements.
-- O(n^2)
*/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]>nums[j])
                {
                    nums[i]=nums[i]+nums[j];
                    nums[j]=nums[i]-nums[j];
                    nums[i]=nums[i]-nums[j];
                }
            }
        }

    }
};