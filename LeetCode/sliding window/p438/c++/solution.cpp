class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        unordered_map<char,int> need,window;
        vector<int> pos;
        int left = 0,right = 0,valid = 0;
        for(char c:p){
            need[c]++;
        }
        while(right<s.size()){
            char come = s[right++];
            if(need.count(come)){
                window[come]++;
                if(window[come]==need[come]){
                    valid++;
                }
            }
            while(right-left>=p.size()){
                if(valid==need.size()){
                    pos.push_back(left);
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
        return pos;
    }
};