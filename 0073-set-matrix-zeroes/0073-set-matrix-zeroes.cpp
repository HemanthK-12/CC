class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix)
    {
       int rows=matrix.size();
       int columns=matrix[0].size();
       bool zero_row=false;

       for(int i=0;i<rows;i++)
       {
        for(int j=0;j<columns;j++)
        {
            if(matrix[i][j]==0)
            {
                if(i==0)
                    zero_row=true;
                else
                    matrix[i][0]=0;
                matrix[0][j]=0;
            }
        }
       }

        for(int i=1;i<rows;i++)
        {
            if(matrix[i][0]==0)
            {
                for(int j=0;j<columns;j++)
                {
                    matrix[i][j]=0;
                }
            }
        }
        for(int j=0;j<columns;j++)
        {
            if(matrix[0][j]==0)
            {
                for(int i=0;i<rows;i++)
                {
                    matrix[i][j]=0;
                }
            }
        }
        if(zero_row)
        {
            for(int i=0;i<columns;i++)
            {
                matrix[0][i]=0;
            }
        }
        
    }
};