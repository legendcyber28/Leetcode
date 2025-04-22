class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.size();
        int result = -1;
        // better solution as use of map which reduces the time complecity
        unordered_map<char,int> mp;
        for(int i = 0; i<n; i++)
        {
            char ch  = s[i];
            if(mp.find(ch)==mp.end())
            {
                mp[ch] = i;
            }
            else{
                result = max(result, i- mp[ch]-1);
            }
        }
        return result;
    }
};