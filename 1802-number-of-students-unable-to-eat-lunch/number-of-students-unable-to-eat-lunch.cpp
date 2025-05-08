class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = students.size();

        int arr[2]; 
        //arr[0] student which like the 1 or square sandwiches
        // arr[1] student which like the 0 or circle sandwiches

        for(int &nums: students)
        {
            arr[nums]++;
            
        }
        for(int i = 0; i<n ; i++)
        {
            int sand = sandwiches[i];
            if(arr[sand] == 0 )
            {
                return n-i;
            }
            arr[sand]--;
        }
        return 0;
    }
};