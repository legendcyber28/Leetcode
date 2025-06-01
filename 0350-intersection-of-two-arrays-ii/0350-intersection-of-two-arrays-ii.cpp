class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
         unordered_map<int, int> freq;
    vector<int> result;

    // Count frequencies in nums1
    for (int num : nums1) {
        freq[num]++;
    }

    // Check nums2 and decrement counts
    for (int num : nums2) {
        int &count = freq[num];
        if (count > 0) {  // If present, add to result
            result.push_back(num);
            count--;
        }
    }
    return result;
    }
};