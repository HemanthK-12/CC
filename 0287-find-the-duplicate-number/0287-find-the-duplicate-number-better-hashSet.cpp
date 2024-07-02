/*
-- We make another array filled with 0's, called a hashSet.
-- See first element and go to the ELEMENT'S INDEX in the hashSet and increment.(if first element is 3, go the the 3RD INDEX in the hashSet and make it 1).
-- When you come to a place where the value is 1, return that number as the duplicate.
-- T=O(n),but S=O(n)
*/
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