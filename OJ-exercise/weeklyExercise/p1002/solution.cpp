/*  ·­Ó²±Ò  */
#include<bits/stdc++.h>
using namespace std;
string str1,str2;
int times;
int main(void) {
    cin >> str1 >> str2;
    while(str1.compare(str2)) {
        for(int i=0; i<str1.size()-1; i++) {
            if(str1[i]!=str2[i]){
                str1[i] = str1[i] == '*' ? 'o' : '*';
                str1[i + 1] = str1[i + 1] == '*' ? 'o' : '*';
                times++;
            }
            if(str1.compare(str2) == 0) {
                cout << times << endl;
                return 0;
            }
        }
    }
    cout << times << endl;
    return 0;
}