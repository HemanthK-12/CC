/*
-- In a matrix,we iterate through all elements in order.
-- When we encounter a 0 anywhere in a row, we set the FIRST element of the row to 0.
-- When we encounter a 0 anywhere in a column, we set the FIRST element of the column to 0.
-- Only for 0,0 this causes a problem, so to solve this, we take another variable zero_row(set it initially to false).
-- When there is a 0 in the FIRST row, we set zero_row=true and if there is 0 in first column,we do it normally and set the first element if the column to 0(which is 0,0).
-- After this, iterate through first row and wherever it is 0, make a loop and set full column to 0.Vice versa for first column.
-- This is O(1) solution.
*/

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