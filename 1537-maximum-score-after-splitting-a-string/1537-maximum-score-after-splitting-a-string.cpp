class Solution {
public:
    int maxScore(string s) {
        int n = s.size();
        int total_ones = count(begin(s),end(s), '1');

        int result = INT_MIN;
        int zeros = 0;
        int ones = 0;
        
        // right one = total_ones-ones;

        for(int i = 0; i<=n-2; i++)
        {
            if(s[i]=='1')
            {
                ones++;
            }
            else{
                zeros++;
            }
            int right_ones = total_ones - ones;

            result = max(result, zeros + right_ones);
        }
        return result;
    }
};