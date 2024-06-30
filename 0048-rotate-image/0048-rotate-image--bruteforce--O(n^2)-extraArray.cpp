/*
-- We need to rotate and return the given matrix.
-- First we make another matrix and push elemets into thsi new matrix in the reverse order.
-- We then equate this new matrix to old matrix.
-- O(n^2) and extra space of O(n^2).
*/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix)
    {
        vector<vector<int>> rotated(matrix.size());
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=matrix.size()-1;j>=0;j--)
            {
                rotated[i].push_back(matrix[j][i]);
                cout<<rotated[i][matrix.size()-1-j]<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<matrix.size();i++)
            for(int j=matrix.size()-1;j>=0;j--)
                matrix[i][j]=rotated[i][j];
        
    }
};