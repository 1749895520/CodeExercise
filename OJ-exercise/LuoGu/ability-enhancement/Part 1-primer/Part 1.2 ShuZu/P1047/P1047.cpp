#include<bits/stdc++.h>
using namespace std;
int main(void){
    int l, m;
    scanf("%d %d",&l,&m);
    int tree[l + 1] = {0};
    for (int i = 0; i < m;i++){
        int a, b;
        scanf("%d %d", &a, &b);
        for (int j = a; j <= b;j++){
            tree[j] = 1;
        }
    }
    int num = 0;
    for (int i = 0; i <= l;i++){
        if(tree[i] == 0){
            num++;
        }
    }
    cout << num << endl;
    getchar();
    getchar();
    return 0;
}