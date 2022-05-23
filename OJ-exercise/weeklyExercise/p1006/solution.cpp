/*  “¿∑÷∂®Œª    */
#include<bits/stdc++.h>
using namespace std;
unordered_map<int,vector<string>> imf;
int m, n, score, findScore;
string name;
int main(void) {
    cin>>m>>n;
    for (int i = 0; i < m; i++) {
        cin >> score >> name;
        imf[score].push_back(name);
    }
    for (int i = 0; i < n;i++) {
        cin >> findScore;
        if(imf.find(findScore) != imf.end()) {
            vector<string>::iterator it;
            if(imf[findScore].size()>1) {
                it = imf[findScore].begin();
                cout << *it << " ";
                it = imf[findScore].end()-1;
                cout << *it << endl;
            } else {
                it = imf[findScore].begin();
                cout << *it << endl;
            }
        } else {
            cout << "OOPS" << endl;
        }
    }
    return 0;
}