class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        
        sort(begin(nums), end(nums));
        int n = nums.size();
        int count = 1; //first subsequence
        int minval = nums[0];  //this is a part of 1st subsequence 

        for(int i = 0; i<n; i++)
        {
            if(nums[i]-minval > k)
            {
                count++;
                minval = nums[i];
            }
        }
        return count;
    }
};