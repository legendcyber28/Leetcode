class Solution {
public:
    int minMaxDifference(int num) {
        string str = to_string(num);
        int n  = str.size();
        char target_max = '9';
        for(char c : str)
        {
            if(c!='9')
            {
                target_max = c;
                break;
            }
        }
        string max_str = str;
        for(int i = 0; i<n; i++)
        {
            if(max_str[i]==target_max)
            {
                max_str[i]='9';
            }
        }
        int max = stoi(max_str);
        
        char target_min = str[0];
        string min_str = str;
        for(int i = 0; i<n; i++)
        {
            if(min_str[i]==target_min)
            {
                min_str[i]='0';
            }
        }
        int min = stoi(min_str);
        return max-min;

    }
};