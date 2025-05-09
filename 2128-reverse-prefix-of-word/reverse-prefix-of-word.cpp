class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.length();
        int j = 0;
        while(j<n && word[j]!=ch)
        {
           
                j++;
        }
        if(j<n)
        {
            reverse(word.begin(), word.begin()+j+1);
        }
        return word;
    }
};