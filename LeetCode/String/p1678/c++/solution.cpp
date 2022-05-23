class Solution {
public:
    string interpret(string command) {
        int begin = 0,len[3] = {1,2,4};
        string before[3] = {"G","()","(al)"},after[3] = {"G","o","al"},ans = "";
        while(begin<command.size()) {
            for(int i=0;i<3;i++) {
                string str(command,begin,len[i]);
                if(str==before[i]) {
                    ans += after[i];
                    begin += len[i];
                    break;
                }
            }
        }
        return ans;
    }
};