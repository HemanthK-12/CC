/* 0075
-- We do this via Dutch National Flag Algorithm.
-- We initialize 3 pointers -- low,mid,high.
-- If 0<num<low-1, num should be 0.(I)
-- If low<num<mid-1, num should be 1.(II)
-- If mid<num<high, num should be in any random unsorted order.(III)
-- If high+1<num<n-1, num should be 2.(IV)

-- Now we initally think low=mid=0, high=n-1 and the whole array is III section.
-- If arr[mid]==0, we swap it with arr[low],mid++,low--(0 is added to end of I section)
-- If arr[mid]==1, we just do mid++(since it is already there in the end of II section)
-- If arr[mid]==2, we swap it with arr[high],high--(2 is added to start of IV section).

--Thats it,Sorted!
--O(1)

*/
class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        int low=0,mid=0,high=nums.size()-1;

        while(mid<=high){
        if(nums[mid]==0)
        {
            int temp=nums[mid];
            nums[mid]=nums[low];
            nums[low]=temp;
            mid++;
            low++;
        }
        else if(nums[mid]==1)
        {
            mid++;
        }
        else
        {
            int temp=nums[mid];
            nums[mid]=nums[high];
            nums[high]=temp;
            high--;
        }
        }

    }
};