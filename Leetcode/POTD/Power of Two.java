//T.C. : O(1)
//S.C. : O(1)
class Solution {
    public boolean isPowerOfTwo(int n) {
        return n > 0 && (n & ( n - 1)) == 0;
    }
}
