/*
-- Keep two pointers - one at end of num1[] and one at starting of num2[].
-- If num2[j]<num1[i], swap both of them and decrement i and increment j.
-- If not, then break because everything else in num1 is less and everything else in num2 is greater.
-- Now, lower half of numbers are in num1 and higher half in num2.Sort these separately and keep num2 at end of num1.
-- O(mlogm+nlogn)
*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int i=m-1,j=0;
        while(i>=0 && j<n)
            if(nums2[j]<nums1[i])
                swap(nums1[i--],nums2[j++]);
            else
                break;
        sort(nums1.begin(),nums1.begin()+m);
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<n;i++)
            nums1[m+i]=nums2[i];
    }
};