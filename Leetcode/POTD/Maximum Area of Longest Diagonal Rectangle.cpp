class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        double max_diagonal = 0;
        int max_area = 0;
        
        for (const auto& rect : dimensions) {
            int length = rect[0];
            int width = rect[1];
            
            double diagonal = sqrt(length * length + width * width);
            int area = length * width;
            
            if (diagonal > max_diagonal) {
                max_diagonal = diagonal;
                max_area = area;
            } else if (diagonal == max_diagonal) {
                max_area = max(max_area, area);
            }
        }
        
        return max_area;
    }
};
