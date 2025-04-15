class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        int n = changed.size();
        vector<int> original;
        if(n%2!=0)
        {
           return {};
        }
        sort(begin(changed),end(changed));
        unordered_map<int,int> mp;
        for(auto it : changed)
        {
            mp[it]++;
        }
        for(auto it:changed)
        {
            int twice = 2*it;
            if(mp[it]==0)
            {
                continue; //skip
            }
            if(mp.find(twice)==mp.end() || mp[twice]==0)
            {
                return {};
            }
            original.push_back(it);
            mp[it]--;
            mp[twice]--;
        }
        return original;
    }
};