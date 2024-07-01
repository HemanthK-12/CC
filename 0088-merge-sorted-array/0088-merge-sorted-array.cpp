class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<int> final(m+n);
        int i=0,j=0,k=0;
        while(i<m && j<n)
        {
            if(nums1[i]<=nums2[j])
            {
                final[k++]=nums1[i++];
            }
            else
            {
                final[k++]=nums2[j++];
            }
        }
        while(i<m)
            final[k++]=nums1[i++];
        while(j<n)
            final[k++]=nums2[j++];
        for(int i=0;i<m+n;i++)
        {
            nums1[i]=final[i];
        }
    }
};