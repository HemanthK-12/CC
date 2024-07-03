/*
-- We make another array filled with 0's, called a hashSet.
-- See first element and go to the ELEMENT'S INDEX in the hashSet and increment.(if first element is 3, go the the 3RD INDEX in the hashSet and make it 1).
-- When you come to a place where the value is 1, return that number as the duplicate.
-- Finally, see which number still has hash[nums[i]]=0 and that is the missing number.
-- T=O(n),but S=O(n)
*/
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