/*  ´¿¹þÏ£±í    */
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxNum = 0,num;
        unordered_set<char> map;
        for(int i=0;i<s.length();i++){
            num = 0;
            for(int j=i;j<s.length();j++){
                if(map.find(s[j])==map.end()){
                    num++;
                    map.insert(s[j]);
                }
                else{
                    map.clear();
                    break;
                }
            }
            if(num>maxNum){
                maxNum = num;
            }
        }
        return maxNum;
    }
};