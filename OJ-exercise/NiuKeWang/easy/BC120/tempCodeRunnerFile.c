/*BC120 小乐乐与二段数*/
#include<stdio.h>
int main(void){
    long n;
    while(scanf("%ld",&n)!=0){
        for(long long i=2;;i++){
            long long num = n*i;
            long long num1 = num;
            int temp=0;
            while(num>9){
                long long num2 = num%10;
                num /= 10;
                if(num%10<num2){
                    temp = 0;
                    break;
                }
                else if(num%10==num2){
                    continue;
                }
                else if(num%10>num2){
                    temp++;
                }
                if(temp>1){
                    break;
                }
            }
            if(temp==1){
                printf("%lld: %lld\n",n,num1);
                break;
            }
        }
    }
    return 0;
}