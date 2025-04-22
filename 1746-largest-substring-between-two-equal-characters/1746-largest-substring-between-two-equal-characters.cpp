class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.size();
        int result = -1;
        // Instead of using the map we can use simply an array of size 26 
        vector<int> count(26,-1);
        for(int i = 0; i<n; i++)
        {
            char ch  = s[i];
            if(count[ch-'a']==-1)
            {
                count[ch-'a'] = i;
            }
            else{
                result = max(result, i- count[ch-'a']-1);
            }
        }
        return result;
    }
};