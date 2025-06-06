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
         
        // using lambda stl
        
        auto lambda = [&] (int freq) {
            return freq%n ==0 ;
        };

        return all_of(begin(arr), end(arr), lambda);
    }
};