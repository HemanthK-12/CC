//Dutch National Flag Algorithm

class Solution {
public:
    void sortColors(vector<int>& nums)
    {
        int *baseP=&nums[0];
        int *lowP=&nums[0];
        int *midP=&nums[0];
        int *highP=&nums[nums.size()-1];

        int lowInd=lowP-baseP;
        int midInd=midP-baseP;
        int highInd=highP-baseP;

        while(midInd<highInd){
        if(nums[midInd]==0)
        {
            nums[midInd]=nums[midInd]+nums[lowInd];
            nums[lowInd]=nums[midInd]-nums[lowInd];
            nums[midInd]=nums[midInd]-nums[lowInd];
            lowP++;
        }
        else if(nums[midInd]==1){        }
        else
        {
            nums[midInd]=nums[midInd]+nums[highInd];
            nums[highInd]=nums[midInd]-nums[highInd];
            nums[midInd]=nums[midInd]-nums[highInd];
            highP--;
        }
        midP++;
        }

    }
};