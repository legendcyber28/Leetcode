class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // set me unique value hi store hote hai yad rakhiye ise
        unordered_set<int> set1 (nums1.begin(), nums1.end());
        vector<int>result; //without using 2nd set

        for(int &num : nums2)
        {
            if(set1.find(num) != set1.end())
            {
                result.push_back(num);
                set1.erase(num);
            }
        }
        return result;
    }
};