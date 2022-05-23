class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> need,window;
        for(char c:s1){
            need[c]++;
        }
        int left = 0,right = 0,valid = 0;
        while(right<s2.size()){
            char come = s2[right++];
            if(need.count(come)){
                window[come]++;
                if(window[come]==need[come]){
                    valid++;
                }
            }
            while(right-left>=s1.size()){
                if(valid==need.size()){
                    return true;
                }
                char go = s2[left++];
                if(need.count(go)){
                    if(window[go]==need[go]){
                        valid--;
                    }
                    window[go]--;
                }
            }
        }
        return false;
    }
};