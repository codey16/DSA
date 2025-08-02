class Solution {
public:
    long long minCost(vector<int>& basket1, vector<int>& basket2) {
        unordered_map<int, int> mp;
        int minele = INT_MAX;

        for(int &x : basket1) {
            mp[x]++;
            minele = min(minele, x);
        }

        for(int &x : basket2) {
            mp[x]--;
            minele = min(minele, x);
        }

        vector<int> finlist;
        for(auto &it : mp) {
            int cost  = it.first;
            int count = it.second;

            if(count == 0) {
                continue;
            }

            if(count % 2 != 0) {
                return -1;
            }

            for(int c = 1; c <= abs(count)/2; c++) {
                finlist.push_back(cost);
            }
        }

        nth_element(begin(finlist), begin(finlist)+finlist.size()/2, end(finlist));
        long long res = 0;
        for(int i = 0; i < finlist.size()/2; i++) {
            res += min(finlist[i], minele*2);
        }
        return res;
    }
};
