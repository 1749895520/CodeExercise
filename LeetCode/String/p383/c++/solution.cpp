class Solution {
public:
    int index[30];
    bool canConstruct(string ransomNote, string magazine) {
        if(ransomNote.size()>magazine.size()) return false;
        for(char c:magazine) {
            index[c-96]++;
        }
        for(char c:ransomNote) {
            if(--index[c-96]<0) {
                return false;
            }
        }
        return true;
    }
};