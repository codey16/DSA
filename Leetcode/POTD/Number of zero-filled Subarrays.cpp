class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long total = 0;
        int count = 0;
        for (int num : nums) {
            if (num == 0) {
                count++;
            } else {
                total += (long long)count * (count + 1) / 2;
                count = 0;
            }
        }
        total += (long long)count * (count + 1) / 2;
        return total;
    }
};
