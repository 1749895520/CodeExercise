class Solution {
    public String removeDuplicateLetters(String s) {
        Stack<Character> st = new Stack<>();
        boolean[] in = new boolean[256];
        // ��count[]��������¼�ַ�����ĳ��λ��֮���Ƿ�����ͬ�ַ�
        int[] count = new int[256];
        for(char c:s.toCharArray()) {
            count[c]++;
        }
        for(char c:s.toCharArray()) {
            count[c]--; //ÿ�α�����ȥ����ǰ�ַ���count[]�����е�һ����
            if(in[c]) {
                continue;
            }
            // ��ջ�е��ַ��ȵ�ǰ�ַ�����ջ���ַ�����
            while(!st.empty() && st.peek()>c) {
                // ����ǰ�ַ�֮���Ѿ���������ͬ�ַ��ˣ����˳�������ѭ��
                if(count[st.peek()] == 0) break;
                in[st.pop()] = false;
            }
            // �ַ���ջ
            st.push(c);
            in[c] = true;
        }
        // ����StringBuilder()�����������ݽ����ַ�
        StringBuilder sb = new StringBuilder();
        while(!st.empty()) {
            sb.append(st.pop());
        }
        // �������ַ����ٷ��ؽ��
        return sb.reverse().toString();
    }
}