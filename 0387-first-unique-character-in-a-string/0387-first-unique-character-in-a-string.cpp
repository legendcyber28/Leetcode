class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        vector<int> freq(26,0);
        for(char ch: s)
        {
            freq[ch-'a']++;
        }
        for(int i = 0; i<n; i++)
        {
            char ch = s[i];
            if(freq[ch-'a']==1)
            {
                return i;
            }
        }
        return -1;
    }
};