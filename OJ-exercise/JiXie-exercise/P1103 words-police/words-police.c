/*根据乱序语句找出关键单词*/
#include<stdio.h>
#include<string.h>
int main(void){
    /*输入关键词*/
    char KeyWord[100][100];
    int i1 = 0,j1 = 0;
    while((KeyWord[i1][j1]=getchar())!='\n'){
        if(KeyWord[i1][j1]==' '){
            KeyWord[i1][j1] = '\0';
            j1 = -1; //下方j会+1
            i1++;
        }
        j1++;
    }
    KeyWord[i1][j1]='\0';
    /*输入待检查的句子*/
    char CheckWord[100][100];
    int i2 = 0,j2 = 0;
    while((CheckWord[i2][j2]=getchar())!='\n'){
        if(CheckWord[i2][j2]==' '){
            CheckWord[i2][j2] = '\0';
            j2 = -1; //下方j会+1
            i2++;
        }
        j2++;
    }
    CheckWord[i2][j2]='\0';
    /*检查单词*/
    for(int a=0;a<=i1;a++){  //KeyWord循环
        for(int b=0;b<=i2;b++){  //CheckWord循环
            int c=0,times=0;    //定义times判断是否完全一致；
            while(KeyWord[a][c]!='\0'){     //循环一个Keyword单词
                int d=0;
                for(d=0;;d++){
                    if(CheckWord[b][d]=='\0'){
                        break;  //检测是否已经达到边界
                    }
                    else if(CheckWord[b][d]==KeyWord[a][c]){
                        times++;break;
                    }
                }
                c++;
                if(times!=c){ //判断如果CheckWord中其中一个字母没有匹配则直接退出循环
                    break;
                }
            }
            if(times==c){
                printf("%s ",KeyWord[a]);break;
            }
        }
    }
    return 0;
}