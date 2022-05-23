#include<stdio.h>
#include<string.h>
int main(void) {
    //定义整个数组的大小及阶乘数
    int n;
    int num[2568] = { 1 };
    scanf("%d", &n);
    //定义数组变量
    int i, j, k;
    int wei = 1;    //定义最大位数
    for (i = 1; i <= n; i++) {
        for (j = 0; j < wei; j++) {
            num[j] *= i;
        }
        for (k = 0; k < wei; k++) {
            if (num[k] > 10) {
                num[k + 1] += num[k] / 10;
                num[k] %= 10;
                if (k == wei - 1) {  //当最后一位运算时，最大位数+1
                    wei += 1;
                }
            }
        }
    }
    //输出数据
    int l;
    for (l = wei-1; l >=0; l--) {
        printf("%d", num[l]);
    }
    return 0;
}
