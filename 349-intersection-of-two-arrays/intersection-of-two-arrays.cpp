class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // set me unique value hi store hote hai yad rakhiye ise
        unordered_set<int> set1 (nums1.begin(), nums1.end());
        unordered_set<int> result;

        for(int &num : nums2)
        {
            if(set1.find(num) != set1.end())
            {
                result.insert(num);
            }
        }
        return vector<int>(result.begin(), result.end());
    }
};