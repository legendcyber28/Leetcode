class Solution {
public:
    string answerString(string word, int numFriends) {
        int n = word.length();
        if(numFriends==1)
        {
            return word;
        }
        string result;

        int longestpossible  = n - (numFriends - 1);
        for(int i = 0; i<n; i++)
        {
            int cantakelength =  min(longestpossible, n-i);

            result = max(result, word.substr(i, cantakelength));
        }

        return result;

    }
};