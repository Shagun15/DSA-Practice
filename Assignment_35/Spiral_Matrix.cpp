class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int count = 0;
        int row = matrix.size();
        int col = matrix[0].size();
        int right = col - 1;
        int bottom = row - 1;
        int left = 0;
        int top = 0;
        int total_elements = row * col;
       
        
        
        while (top <= bottom && left <= right)
        {
            for (int j = left; j <= right; j++)
            {
                ans.push_back(matrix[top][j]);
                count++;
            }
            
            if (count == total_elements)
            {
                break;
            }
            
            top++;
            
            for (int i = top; i <= bottom; i++)
            {
                ans.push_back(matrix[i][right]);
                count++;
            }
            
            if (count == total_elements)
            {
                break;
            }
            
            right--;
            
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bottom][i]);
                count++;
            }
            
            if (count == total_elements)
            {
                break;
            }
            
            bottom--;
            
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
                count++;
            }
            
            if (count== total_elements)
            {
                break;
            }
            
            left++;
        }
        
        return ans;
    }
};
