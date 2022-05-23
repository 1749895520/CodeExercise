class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> index;
        while(n!=1) {
            int m = n;
            n = 0;
            while(m>0) {
                n += (m%10)*(m%10);
                m /= 10;
            }
            if(index.find(n)!=index.end()) {
                return false;
            }
            index.insert(n);
        }
        return true;
    }
};