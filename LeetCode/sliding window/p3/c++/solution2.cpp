/*  »¬¶¯´°¿Ú°æ  */
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> window;
        int left = 0,right = 0,maxLen = 0;
        while(right<s.size()){
            int come = s[right++];
            window[come]++;
            while(window[come]>1){
                int go = s[left++];
                window[go]--;
            }
            maxLen = max(maxLen,right-left);
        }
        return maxLen;
    }
};