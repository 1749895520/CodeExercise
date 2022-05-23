class Solution {
public:
    int flag[30][10];
    int choose(int i,int j) {
        if(i<3) {
            if(j<3) {
                return 18;
            } else if(j<6) {
                return 19;
            } else {
                return 20;
            }
        } else if(i<6) {
            if(j<3) {
                return 21;
            } else if(j<6) {
                return 22;
            } else {
                return 23;
            }
        } else {
            if(j<3) {
                return 24;
            } else if(j<6) {
                return 25;
            } else {
                return 26;
            }
        }
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++) {
            for(int j=0;j<9;j++) {
                if(board[i][j]!='.') {
                    int num = board[i][j] - '0';
                    int pos = choose(i,j);
                    if(flag[i][num]==0&&flag[j+9][num]==0&&flag[pos][num]==0) {
                        flag[i][num]++;
                        flag[j+9][num]++;
                        flag[pos][num]++;
                    } else {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};