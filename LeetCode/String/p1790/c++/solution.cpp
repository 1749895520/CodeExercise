class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        char c1,c2;
        short p=0;
        bool flag = true;
        while(p<s1.size()) {
            if(s1[p]!=s2[p]) {
                c1 = s1[p];
                c2 = s2[p];
                p++;
                flag = false;   //当两个字符串只有一个位置的字符不同时，会使flag为false
                break;
            }
            p++;
        }
        while(p<s1.size()) {
            if(s1[p]!=s2[p]) {
                if(c1!=s2[p] || c2!=s1[p]) {
                    return false;
                } else if(flag) {   //如果flag又为true时意味着已经有两组字符可互相交换，若又出现一组，则直接返回false
                    return false;
                }
                flag = true;    //当已经有两组字符不同且互相交换后相同将flag记为true
            }
            p++;
        }
        return flag;    //flag保证字符串出现0对或2对不同且互相交换后可以相等时返回true，其它特殊情况返回false
    }
};