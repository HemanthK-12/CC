/*
-- We first sort the array.Then, duplicate elements are always adjacent to each other.
-- Now, we check through the array's adjacents for same number and when we do, return that number.
-- S=O(1) but T=O(nlogn)
*/
class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        int num=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
            if(nums[i]==nums[i+1])
            {
                num=nums[i];
                break;
            }
        return num;
    }
};
