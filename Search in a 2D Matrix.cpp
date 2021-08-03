//https://leetcode.com/problems/search-a-2d-matrix/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int i, j;
        int rows = (int)matrix.size();
        int cols = (int)matrix[0].size();
        bool value = false;
        for(i = 0; i<rows; i++)
        {
            if(matrix[i][cols-1] >= target)
                break;
        }
        
        if(i >= rows)
        {
            return value;
        }
        
        for(j = 0; j<cols; j++)
        {
            if(matrix[i][j] == target)
            {
                value = true;
            }
        }
        
        return value;
        
    }
};
