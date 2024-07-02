class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n)
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);

        for(int i = 0; i < n; ++i) {
        nums1[m + i] = nums2[i];
    }

    // Function to calculate the next gap
    auto nextGap = [](int gap) -> int {
        if (gap <= 1) return 0;
        return (gap / 2) + (gap % 2);
    };

    int gap = nextGap(m + n);

    while (gap > 0) {
        int i = 0;
        // Compare elements in the first array
        for (; i + gap < m + n; ++i) {
            if (nums1[i] > nums1[i + gap]) {
                std::swap(nums1[i], nums1[i + gap]);
            }
        }
        gap = nextGap(gap);
    }
    }
};