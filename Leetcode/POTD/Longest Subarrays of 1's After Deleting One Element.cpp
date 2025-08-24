class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0, right = 0;
        int zero_count = 0;
        int max_len = 0;
        int n = nums.size();
        
        while (right < n) {
            if (nums[right] == 0) {
                zero_count++;
            }
            
            // Shrink window if more than one zero
            while (zero_count > 1) {
                if (nums[left] == 0) {
                    zero_count--;
                }
                left++;
            }
            
            max_len = max(max_len, right - left); // Note: we're deleting one element
            right++;
        }
        
        return max_len;
    }
};
