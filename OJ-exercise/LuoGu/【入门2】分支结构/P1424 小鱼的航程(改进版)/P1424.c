/*小鱼的航程改进版*/
#include<stdio.h>
int main(void){
    int x,n;
    int km = 0;
    scanf("%d %d",&x,&n);
    for(int i=0;i<n;i++){
        if(x>7){
            x -= 7;
        }
        if(x>=1&&x<=5){
            km += 250;
        }
        x++;
    }
    printf("%d",km);
    return 0;
}