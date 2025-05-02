class Solution {
public:
    char findTheDifference(string s, string t) {
        int m = s.length();
        int n = t.length();
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int i = 0;
        int j = 0;

        while(i<m && j<n)
        {
            if(s[i] != t [j])
            {
                return t[j];
            }
            i++;
            j++;
        }
        return t.back();
    }
};