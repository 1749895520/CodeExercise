/*BC120 小乐乐与二段数*/
/*效率低下，针对的数字范围过小，废弃*/
#include<stdio.h>
int main(void){
    long n;
    while(scanf("%ld",&n),n!=0){
        for(long long i=2;;i++){
            long long num = n*i;
            long long num1 = num;
            int temp=0;
            while(num>9){
                long long num2 = num%10;
                num /= 10;
                if(num%10==num2){
                    continue;
                }
                else{
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