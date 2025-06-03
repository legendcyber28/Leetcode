class Solution {
public:
    int minOperations(vector<string>& logs) {
        int depth = 0;
        int n = logs.size();
        for(int i = 0; i<n; i++)
        {
            if(logs[i] == "../")
            {
                depth--;
                if(depth<0)
                {
                    depth = 0;
                }
            }
            else if(logs[i] == "./")
            {
                continue;
            }
            else
                depth++;
        }
        return depth;
    }
};