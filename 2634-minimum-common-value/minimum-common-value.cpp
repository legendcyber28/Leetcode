class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;

        for(int &num : nums1)
        {
            mp[num] = 1;

        }
        for(int &num : nums2)
        {
           if( mp[num] ==1 )
           {
            mp[num] = 2;
           }
            
        }
        int smallest = -1;
        for(auto& [num,freq]:mp)
        {
            if(freq == 2)
            {
               if(smallest == -1 || num < smallest)
               {
                  smallest = num;
               }
            }
        }
        return smallest;
    }
};