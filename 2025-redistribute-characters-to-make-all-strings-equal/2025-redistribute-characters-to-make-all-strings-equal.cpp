class Solution {
public:
    bool makeEqual(vector<string>& words) {
        int n = words.size();
        vector<int> arr(26,0);
        for(string &word : words)
        {
            for(char &ch : word)
            {
                arr[ch - 'a']++;
            }
        }

        for(auto &freq : arr)
        {
            if(freq % n != 0)
            {
                return false;
            }
        }
        return true;
    }
};