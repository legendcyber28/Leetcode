class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
        {
            return false;
        }
        // using and operator we can check is it power of two or not, basically it is formula.
        return (n & (n-1))==0;
    }
};