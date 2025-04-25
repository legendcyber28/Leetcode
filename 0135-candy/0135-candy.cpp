class Solution {
public:
    int candy(vector<int>& ratings) {
        int n = ratings.size();
        vector<int> bonus(n,1);
        for(int i =1;i<n;i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                bonus[i] = bonus[i-1]+1;
            }
        }
        for(int i = n-2;i>=0;i--)
        {
            if(ratings[i]>ratings[i+1])
            {
                bonus[i] = max(bonus[i],bonus[i+1]+1);
            }
        }
        int total = 0;
        for(int num:bonus)
        {
            total += num;
        }
        return total;

    }
};