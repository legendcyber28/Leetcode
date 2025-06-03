class Solution {
public:
    int minOperations(vector<string>& logs) {
        // using stack
        stack<string> st;
        for(string &log : logs)
        {
            if(log == "../")
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }
            else if(log != "./")
            {
                st.push(log);
            }
        }
        return st.size();
    }
    
};