class Solution {
public:
    int map[30];
    int firstUniqChar(string s) {
        for(char c:s) {
            int n = c-96;
            map[n]++;
        }
        for(int i=0;i<s.size();i++) {
            int n = s[i]-96;
            if(map[n]==1) {
                return i;
            }
        }
        return -1;
    }
};