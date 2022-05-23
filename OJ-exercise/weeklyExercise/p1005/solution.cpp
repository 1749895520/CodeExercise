/*  ²î¾à    */
#include<bits/stdc++.h>
using namespace std;
int n,minNum = 1e9,num[100005];
int cmp(int a,int b) {
    return a<b;
}
int main(void) {
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    sort(num,num+n,cmp);
    printf("%d ",num[n-1]-num[0]);
    for(int i=1;i<n;i++){
        minNum = minNum < num[i]-num[i-1] ? minNum : num[i]-num[i-1];
    }
    printf("%d",minNum);
    return 0;
}