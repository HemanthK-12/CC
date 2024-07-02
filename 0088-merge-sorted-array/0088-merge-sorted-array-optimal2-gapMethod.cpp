/*
-- We use Gap Method, derived from shell sort.
*/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        int len=m+n;
        int gap=(len/2)+(len%2);//or gap=(len%2==0)?(len/2):((len/2)+1);
        while(gap>0)
        {
            int i=0;
            int j=gap+i;
            while(j<len)
            {
                if(i<m && j>=m)
                {
                    if(nums1[i]>nums2[j-n])
                        swap(nums1[i],nums2[j-n]);
                }
                else if(i>=m)
                {
                    if(nums2[i-n]>nums2[j-n])
                        swap(nums2[i-n],nums2[j-n]);
                }
                else
                {
                    if(nums1[i]>nums1[j])
                        swap(nums1[i],nums1[j]);
                }
                i++;j++;
            }
            if(gap==1)
                break;
            gap=(gap/2)+(gap%2);
        }
    }
};