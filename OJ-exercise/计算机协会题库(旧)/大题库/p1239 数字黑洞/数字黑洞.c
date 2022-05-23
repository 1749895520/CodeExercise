#include<stdio.h>
int main(void) {
    int times;
    int n;
    int num[4], min[4], max[4];
    scanf("%d", &n);
    for (times = 1;; times++) {
        /*输入四位数计入数组*/
        for (int i = 0; i < 4; i++) {
            num[i] = n % 10;
            max[i] = num[i];
            min[i] = num[i];
            n /= 10;
        }
        /*最大数排序*/
        for (int i = 0; i < 3; i++) {
            for (int j = i+1; j < 4; j++) {
                if (max[i] < max[j]) {
                    max[i] = max[i] + max[j];
                    max[j] = max[i] - max[j];
                    max[i] = max[i] - max[j];
                }
            }
        }
        /*最小数排序*/
        for (int i = 0; i < 3; i++) {
            for (int j = i+1; j < 4; j++) {
                if (min[i] > min[j]) {
                    min[i] = min[i] + min[j];
                    min[j] = min[i] - min[j];
                    min[i] = min[i] - min[j];
                }
            }
        }
        /*将最大数和最小数录入max_,min_*/
        int max_=0, min_=0;
        for (int i = 0; i < 4; i++) {
            max_ *= 10;
            max_ += max[i];
        }
        for (int j = 0; j < 4; j++) {
            min_ *= 10;
            min_ += min[j];
        }
        /*求出新的n的值*/
        n = max_ - min_;
        if (n == 6174) {
            printf("%d", times); return 0;
        }
    }
}