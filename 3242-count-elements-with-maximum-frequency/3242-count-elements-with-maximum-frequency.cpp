class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        // always remember frequency ka question mean map se try karna hai ohk
        
        unordered_map<int,int> mp;
        for(int &num : nums)
        {
            mp[num]++;
        }
        int max_freq =0 ;
        for(auto &[num,freq] :mp)
        {
            max_freq = max(max_freq,freq);
        }
        int cnt = 0;
        for(auto & [num,freq] : mp)
        {
            if(freq == max_freq)
            {
                cnt+=freq;
            }
        }
        
        return cnt;

    }
};