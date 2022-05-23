class Solution {
public:
    int map[30],num;
    bool isAnagram(string s, string t) {
        for(char c:s) {
            map[c-96]++;
        }
        for(char c:t) {
            map[c-96]--;
            if(map[c-96]<0) {
                return false;
            }
        }
        for(int n:map) {
            if(n!=0) {
                return false;
            }
        }
        return true;
    }
};