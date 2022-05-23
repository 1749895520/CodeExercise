#include<bits/stdc++.h>
using namespace std;
int main(void){
    int num[100];
    int i = 0;
    do{
        scanf("%d", &num[i]);
        i++;
    } while (num[i - 1] != 0);
    for (int j = i-2; j >= 0;j--){
        printf("%d ",num[j]);
    }
    getchar();
    getchar();
    return 0;
}