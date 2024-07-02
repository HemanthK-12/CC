/* 0287
-- We use Floyd's Cycle Detection algorithm of slow and fast.
-- We make  linked-list type of figure where we go to the first element, see the value and go to the VALUE'S INDEX in the array.Then we continue.
-- As we continue, we make a diagram and in the diagram, we'll get a circle, ending at the duplicate element.
-- Now, we initialize a slow pointer, which skips to next element(in the diagram, so slow'=nums[slow]) every iteration, and fast pointer which skips to the next next element(so fast'=nums[nums[fast]]).
-- When we keep on iterating , they intersect 1st time at a value.The distance from this value and the first element(nums[0]) to the duplicate element is the same*.
-- We now initialize a 2nd slow pointer at num[0] and simultaneously count slow and slow2 forward.
-- when they reach the same index(i.e. intersect), that's the duplicate element.we return this.

-- *For proof, think of distance from nums[0] to duplicate = a and dist from intersection value=x and cycle length =c.now, since fast is twic faster than slow, fast=2*slow.Length which fast will travel before intersecting is (starting length)+(one whole cycle since it is faster)+(length from duplicate to intersection)=a+c+c-x. This should be equal to 2*(slow distance)=2*(a+c-x).So a+c+c-x=2a+2c-2x => a=x.Hence proved.
*/
class Solution {
public:
    int findDuplicate(vector<int>& nums)
    {
        int slow=nums[0];
        int fast=nums[0];
        while(1)
        {
            slow=nums[slow];
            fast=nums[nums[fast]];
            if(slow==fast)
                break;
        }

        int slow2=nums[0];

        while(slow!=slow2)
        {
            slow=nums[slow];
            slow2=nums[slow2];
        }
        return slow2;
    }
};