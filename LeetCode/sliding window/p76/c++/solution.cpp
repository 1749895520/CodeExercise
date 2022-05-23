class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> need,window;
        for(char c:t){
            need[c]++;
        }
        int left = 0,right = 0,valid = 0;
        int start = 0,len = INT_MAX;
        while(right<s.size()){
            char come = s[right++];
            if(need.count(come)){
                window[come]++;
                if(window[come]==need[come]){
                    valid++;
                }
            }
            while(valid==need.size()){
                if(right-left<len){
                    start = left;
                    len = right - left;
                }
                char go = s[left++];
                if(need.count(go)){
                    if(window[go]==need[go]){
                        valid--;
                    }
                    window[go]--;
                }
            }
        }
        return len==INT_MAX?"":s.substr(start,len);
    }
};