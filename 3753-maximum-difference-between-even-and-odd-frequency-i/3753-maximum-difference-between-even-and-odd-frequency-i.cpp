class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> mp;
        int n = s.length();
        int minEven = n+1;
        int maxOdd = 0;
        for(auto &it : s)
        {
            mp[it]++;
        }
        for(auto &it : mp)
        {
            if(it.second == 0)
            {
                continue;
            }
            else if(it.second %2==0)
            {
                minEven = min(minEven, it.second);
            }
            else
                maxOdd = max (maxOdd,it.second);
        }
        return maxOdd-minEven;
    }
};