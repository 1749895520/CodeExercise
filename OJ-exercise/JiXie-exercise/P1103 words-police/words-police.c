/*������������ҳ��ؼ�����*/
#include<stdio.h>
#include<string.h>
int main(void){
    /*����ؼ���*/
    char KeyWord[100][100];
    int i1 = 0,j1 = 0;
    while((KeyWord[i1][j1]=getchar())!='\n'){
        if(KeyWord[i1][j1]==' '){
            KeyWord[i1][j1] = '\0';
            j1 = -1; //�·�j��+1
            i1++;
        }
        j1++;
    }
    KeyWord[i1][j1]='\0';
    /*��������ľ���*/
    char CheckWord[100][100];
    int i2 = 0,j2 = 0;
    while((CheckWord[i2][j2]=getchar())!='\n'){
        if(CheckWord[i2][j2]==' '){
            CheckWord[i2][j2] = '\0';
            j2 = -1; //�·�j��+1
            i2++;
        }
        j2++;
    }
    CheckWord[i2][j2]='\0';
    /*��鵥��*/
    for(int a=0;a<=i1;a++){  //KeyWordѭ��
        for(int b=0;b<=i2;b++){  //CheckWordѭ��
            int c=0,times=0;    //����times�ж��Ƿ���ȫһ�£�
            while(KeyWord[a][c]!='\0'){     //ѭ��һ��Keyword����
                int d=0;
                for(d=0;;d++){
                    if(CheckWord[b][d]=='\0'){
                        break;  //����Ƿ��Ѿ��ﵽ�߽�
                    }
                    else if(CheckWord[b][d]==KeyWord[a][c]){
                        times++;break;
                    }
                }
                c++;
                if(times!=c){ //�ж����CheckWord������һ����ĸû��ƥ����ֱ���˳�ѭ��
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