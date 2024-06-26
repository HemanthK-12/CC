/*
-- First of all, Understand that all permutations in a set(eg.[2,3,6]), when made into numbers(eg. 236) will be arraged in ascending order.
-- So, the next permutation of a set will be the next smallest number in the order of all permutations.
-- First, see the break point from where, every element is decreasing.This is the common prefix.
-- Then, find the min number after the break point, which is larger than the break point.For this, keep on swapping the break point with every number after break point if it is greater than the pt.
-- After this, just reverse all the numbers after the break point and attach it to the numbers before the break pt.This is the next permutation.
*/
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int break_pt=-1;

        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                break_pt=i;
                break;
            }
        }

        if(break_pt==-1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }

        for(int i=n-1;i>break_pt;i--)
        {
            if(nums[i]>nums[break_pt])
            {
                nums[i]=nums[break_pt]+nums[i];
                nums[break_pt]=nums[i]-nums[break_pt];
                nums[i]=nums[i]-nums[break_pt];
                break;
            }
        }
        
        reverse(nums.begin()+break_pt+1,nums.end());
    }
};