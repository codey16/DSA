class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        vector<int> result;
        int i = 0, j = 0;
        int direction = 1; // 1 for upward, -1 for downward
        
        while (result.size() < m * n) {
            result.push_back(mat[i][j]);
            
            if (direction == 1) { // Moving up
                if (j == n - 1) {
                    i++;
                    direction = -1;
                } else if (i == 0) {
                    j++;
                    direction = -1;
                } else {
                    i--;
                    j++;
                }
            } else { // Moving down
                if (i == m - 1) {
                    j++;
                    direction = 1;
                } else if (j == 0) {
                    i++;
                    direction = 1;
                } else {
                    i++;
                    j--;
                }
            }
        }
        
        return result;
    }
};
