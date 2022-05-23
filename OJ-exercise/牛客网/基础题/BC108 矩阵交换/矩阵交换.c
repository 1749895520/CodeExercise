#include<stdio.h>
int main(void){
    /*输入行数a和列数b*/
    int m,n;
    scanf("%d %d",&m,&n);
    /*输入数组内容*/
    int num[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&num[i][j]);
        }
    }
    /*输入执行操作次数k*/
    int k;
    scanf("%d",&k);
    getchar();
    /*定义k次操作的具体内容*/
    char change[k];
    int part1[k],part2[k];
    for(int l=0;l<k;l++){
        scanf("%c %d %d",change+l,part1+l,part2+l);
        getchar();
    }
    /*进行操作*/
    int temp;
    for(int p=0;p<k;p++){
        int x=part1[p]-1,y=part2[p]-1;
        if(change[p]=='r'){
            for(int q=0;q<n;q++){
                temp = num[x][q];
                num[x][q] = num[y][q];
                num[y][q] = temp; 
            }
        }
        else if(change[p]=='c'){
            for(int q=0;q<m;q++){
                temp = num[q][x];
                num[q][x] = num[q][y];
                num[q][y] = temp;
            }
        }
    }
    /*输出操作之后的数组*/
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}