/*
-- We realise that to rotate a matrix, we transpose it and then reverse every row.
-- So, we transpose matrix by swapping i,j with j,i and reverse rows by using the reverse() function.
-- O(n^2) and space=O(1) since inplace.
*/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix)
    {
        ios::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
        
        int n=matrix.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(i==j)
                    continue;
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++)
            reverse(matrix[i].begin(),matrix[i].end());


        
    }
};