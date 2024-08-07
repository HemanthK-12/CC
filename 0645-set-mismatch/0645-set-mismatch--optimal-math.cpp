/*
-- First find the sum of array and sum of squares of array.
-- The find the sum of all numbers from 1 to n and sum of squares of all no.s from 1 to n.
-- The find y-x=sumActual - sum and y^2-x^2=sosActual-sos.
-- from equations,find x and y.
*/
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums)
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int n=nums.size();
        long long sum=0,sos=0,sumActual=0,sosActual=0;
        for(int i=0;i<n;i++)
        {
            sum+=(long long)nums[i];
            sos+=(long long)((nums[i])*(nums[i]));
        }
        sumActual=((n)*(n+1LL))/2LL;
        sosActual=((n)*(n+1LL)*((2LL*n)+1LL))/6LL;

        long long xyDiff=(sumActual-sum);
        long long xySum=((sosActual-sos)/xyDiff);

        int y=(int)((xySum+xyDiff)/2);
        int x=y-(int)xyDiff;

        vector<int> final;
        final.push_back(x);
        final.push_back(y);

        return final;
        
    }
};