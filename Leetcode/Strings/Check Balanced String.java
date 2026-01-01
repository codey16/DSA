class Solution {
    public boolean isBalanced(String num) {
        int esum = 0;
        int osum = 0;
        for(int i = 0; i < num.length(); i++)
        {
            int d = num.charAt(i) - '0';
            if(i % 2 == 0)
                esum += d;
            else
                osum += d; 
        }
        return esum == osum;
    }
}
