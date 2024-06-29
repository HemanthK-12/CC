class Solution
{
public:

    int nCr(int n,int r)
    {
        long long ans=1;
        for(int i=0;i<r;i++)
        {
            ans=ans*(n-i);
            ans=ans/(i+1);
        }
        return (int)ans;
    }
    vector<vector<int>> generate(int n)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<vector<int>> pascal(n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=i;j++)
            {
                pascal[i].push_back(nCr(i,j));
            }
        }
        return pascal;
    }

};



