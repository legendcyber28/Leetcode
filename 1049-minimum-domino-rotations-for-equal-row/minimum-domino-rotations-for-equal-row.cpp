class Solution {
public:
    
    int find (vector<int>& tops, vector<int>& bottoms , int val)
    {
          int m = tops.size();
        int n = bottoms.size();
        int swap_top = 0;
        int swap_bottom = 0;
         
        for(int i = 0 ; i<m; i++)  // for tops checking
        {
            if(tops[i]!=val && bottoms[i]!=val)
            {
                return -1;
            }
            else if(tops[i] != val)
            {
                swap_top++;
            }
        }

         for(int j = 0 ; j<n; j++)
        {
            if(tops[j]!=val && bottoms[j]!=val)
            {
                return -1;
            }
            else if(bottoms[j] != val)
            {
                swap_bottom++;
            }
        }
        return min(swap_top, swap_bottom);
    }
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
      
        int result = INT_MAX;
         for(int  val = 1 ;val<=6; val++)
         {
            int step = find(tops, bottoms, val);
            if(step != -1)
            {
                result = min(result, step);
            }
         }
         
         return result == INT_MAX ? -1 : result ;
    }
};