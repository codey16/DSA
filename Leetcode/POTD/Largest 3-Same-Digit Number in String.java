class Solution {
    public String largestGoodInteger(String num) {
        String result = "";
        for (int i = 0; i < num.length() - 2; i++) {
            if (num.charAt(i) == num.charAt(i+1) && num.charAt(i+1) == num.charAt(i+2)) {
                String current = num.substring(i, i+3);
                if (current.compareTo(result) > 0) {
                    result = current;
                }
            }
        }
        return result;
    }
}
