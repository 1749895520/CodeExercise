class Solution {
public:
    int index[30];
    char findTheDifference(string s, string t) {
        for(char c:s) {
            index[c-96]++;
        }
        for(char c:t) {
            if(index[c-96]==0) {
                return c;
            }
            index[c-96]--;
        }
        return ' ';
    }
};