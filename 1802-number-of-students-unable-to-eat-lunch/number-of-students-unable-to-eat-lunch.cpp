class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> que;
        stack<int> st;
        for(int &nums : students)
        {
            que.push(nums);
        }
        int m = sandwiches.size();
        for(int i = m-1; i>=0 ;i--)
        {
               st.push(sandwiches[i]);
        }
        int unable_eat = 0;
        while(!que.empty() && unable_eat < que.size())
        {
            if(que.front() == st.top())
            {
                que.pop();
                st.pop();
                unable_eat = 0;

            }
            else
            {
                que.push(que.front());
                que.pop();
                unable_eat++;
            }
        }

        return que.size();
        
    }
};