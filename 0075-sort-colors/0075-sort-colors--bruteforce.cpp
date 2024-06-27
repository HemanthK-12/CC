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
        //or i can use mergesort(nums,0,nums.size()-1)
    }

    // void mergesort(vector<int>& nums,int left,int right)
    // {
    //     if(left>=right)
    //         return;
    //     int mid=(left+right)/2;
    //     mergesort(nums,left,mid);
    //     mergesort(nums,mid+1,right);
    //     merge(nums,left,mid,right);
    // }
    // void merge(vector<int>& nums,int left,int mid,int right)
    // {
    //     int n1=mid-left+1;
    //     int n2=right-mid;
    //     vector<int>L(n1),R(n2);
    //     for(int i=0;i<n1;i++)
    //         L[i]=nums[left+i];
    //     for(int i=0;i<n2;i++)
    //         R[i]=nums[mid+1+i];
        
    //     int i=0,j=0,k=left;
    //     while(i<n1 && j<n2)
    //     {
    //         if(L[i]<=R[j])
    //             nums[k++]=L[i++];
    //         else
    //             nums[k++]=R[j++];
    //     }

    //     while(i<n1)
    //         nums[k++]=L[i++];
    //     while(j<n2)
    //         nums[k++]=R[j++];
    // }
};