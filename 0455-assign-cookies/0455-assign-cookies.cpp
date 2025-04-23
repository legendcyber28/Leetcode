class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size();
        int m = s.size();
        sort(begin(g),end(g));
        sort(begin(s),end(s));
        
        int i = 0, j=0;
        while(i<n && j<m)
        {
            if(g[i]<=s[j])
            {
                i++;
            }
            j++;
        }
        
        return i;
    }
};