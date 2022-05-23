#include<bits/stdc++.h>
using namespace std;
bool test[1010][1010];
int n, m, k, day, num;
int main(void){
    cin >> n >> m >> k;
    for (int i = 0; i < n;i++){
        for (int j = 0; j < m;j++){
            cin >> day;
            test[j][day] = 1;
        }
    }
    for (int i = 1; i <= k;i++){
        for (int j = 0; j < m;j++){
            if(test[j][i])num++;
        }
        cout << num << ' ';
        num = 0;
    }
    return 0;
}