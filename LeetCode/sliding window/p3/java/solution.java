class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashMap<Character,Boolean> windows = new HashMap<>();
        int left = 0,right = 0,maxLen = 0;
        while(right<s.length()){
            char come = s.charAt(right++);
            if(windows.containsKey(come)==false) {
                windows.put(come,true);
            } else {
                while(windows.containsKey(come)==true) {
                    char go = s.charAt(left++);
                    windows.remove(go);
                }
            }
            maxLen = Math.max(maxLen,right-left);
            windows.put(come,true);
        }
        return maxLen;
    }
}