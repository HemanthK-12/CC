class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<pair<int,int>> zeroes;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                if(matrix[i][j]==0)
                    zeroes.push_back(make_pair(i,j));
        
        for(int i=0;i<zeroes.size();i++)
        {
            for(int j=0;j<n;j++)
            {
                matrix[zeroes[i].first][j]=0;
            }
        }
        for(int i=0;i<zeroes.size();i++)
        {
            for(int j=0;j<m;j++)
            {
                matrix[j][zeroes[i].second]=0;
            }
        }
        
    }
};