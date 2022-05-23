class Solution {
    public String removeDuplicateLetters(String s) {
        Stack<Character> st = new Stack<>();
        boolean[] in = new boolean[256];
        // 用count[]数组来记录字符串中某个位置之后是否还有相同字符
        int[] count = new int[256];
        for(char c:s.toCharArray()) {
            count[c]++;
        }
        for(char c:s.toCharArray()) {
            count[c]--; //每次遍历都去除当前字符在count[]数组中的一个量
            if(in[c]) {
                continue;
            }
            // 若栈中的字符比当前字符大，则将栈中字符弹出
            while(!st.empty() && st.peek()>c) {
                // 若当前字符之后已经不存在相同字符了，则退出弹出的循环
                if(count[st.peek()] == 0) break;
                in[st.pop()] = false;
            }
            // 字符入栈
            st.push(c);
            in[c] = true;
        }
        // 创建StringBuilder()方法类型数据接收字符
        StringBuilder sb = new StringBuilder();
        while(!st.empty()) {
            sb.append(st.pop());
        }
        // 先逆序字符串再返回结果
        return sb.reverse().toString();
    }
}