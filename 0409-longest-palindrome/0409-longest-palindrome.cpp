class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        bool check = false;
        int result = 0;
        for(auto &it : s)
        {
            mp[it]++;
        }
        for(auto &it : mp)
        {
            int freq = it.second;
            if(freq % 2 ==0)
            {
                result+=freq;
            }
            if(freq % 2!=0)
            {
                result += freq-1;  // add the even part of the frequencies
                check = true;
                
            }
        }
        if(check)
        {
            result+=1;
        }
        return result;
    }
};