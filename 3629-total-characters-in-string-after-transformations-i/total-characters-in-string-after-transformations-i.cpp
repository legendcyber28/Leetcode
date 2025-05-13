class Solution {
public:
    int M = 1e9 + 7 ;
    int lengthAfterTransformations(string s, int t) {
        // unordered_map<char,int> mp;
        vector<int> mp(26,0);;
        for(auto &it : s ) // o(n)
        {
            mp[it - 'a']++;
        }
        for(int i = 1; i<=t ; i++)
        {
            // unordered_map<char,int> temp;
            vector<int> temp(26,0);
            for(int i = 0 ; i<26; i++)
            {
                char ch = i + 'a';  // as 0->a , 1->b, and so on
                int freq = mp[i];
                if(ch !='z')
                {
                    temp[(ch+1)-'a'] = (temp[(ch+1) - 'a'] + freq) % M;
                }
                else
                {
                    temp['a' - 'a'] = (temp['a' - 'a'] + freq) % M;
                    temp['b' - 'a' ] = (temp['b' -'a'] + freq) % M;
                }
            }
            mp = move(temp);
        }
        int total = 0 ;
        for(int i = 0; i<26; i++)
        {
            total =  (total + mp[i])%M;
        }
        return total;
    }
};