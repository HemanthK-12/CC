/*
-- nth row of pascal's triangle (0-based indexing) has n+1 elements and are : nC0,nC1,..,nCn.
-- we generate each row by nCr=(n-r+1)/r * nCr-1 , so O(n).
-- we then generate n rows, totalling to O(n^2).
*/
class Solution
{
public:

    vector<int> genRow(int n)
    {
        vector<int> row(n+1);
        row[0]=1;
        if(n==0)
            return row;
        for(int i=1;i<=n;i++)
        {
            int numerator=n-i+1;
            int multiple=row[i-1]*numerator;
            row[i]=multiple/i;
        }
        return row;
    }
    vector<vector<int>> generate(int n)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        vector<vector<int>> pascal(n);
        for(int i=0;i<n;i++)
            pascal[i]=genRow(i);
        return pascal;
    }

};



