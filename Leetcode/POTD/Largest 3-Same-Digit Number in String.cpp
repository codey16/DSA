class Solution {
public:
    string largestGoodInteger(string num) {
        string fin = "";
        for(int i=0; i<num.size(); i++)
        {
            if(num[i]==num[i+1] && num[i+1] == num[i+2])
            {
                string s = num.substr(i,3);
                if(s>fin)   fin = s;
            }
        }
        return fin;
    }
};
