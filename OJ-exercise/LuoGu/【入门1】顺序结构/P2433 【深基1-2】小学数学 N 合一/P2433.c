/*小学数学 N 合一*/
#include<stdio.h>
#include<math.h>
int main(void){
    int number;
    scanf("%d",&number);
    switch(number){
        case 1:{
            printf("I love Luogu!");
            break;
        }
        case 2:{
            printf("%d %d",2+4,10-6);
            break;
        }
        case 3:{
            printf("%d %d %d",14/4,14/4*4,14-14/4*4);
            break;
        }
        case 4:{
            printf("%.3f",500/3.0);
            break;
        }
        case 5:{
            printf("%d",480/32);
            break;
        }
        case 6:{
            printf("%lf",sqrt(6*6+9*9));
            break;
        }
        case 7:{}
        case 8:{}
        case 9:{}
        case 10:{}
        case 11:{}
        case 12:{}
        case 13:{}
        case 14:{}
    }
    return 0;
}