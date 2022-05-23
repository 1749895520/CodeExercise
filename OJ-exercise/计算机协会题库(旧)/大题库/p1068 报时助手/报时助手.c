#include<stdio.h>
int main(void){
    //输入时间
    int h,m;
    scanf("%d %d",&h,&m);
    //定义0-19的英文，以及20，30，40，50的英文
    char* num_1[20] = {"zero","one","two","three","four"
    ,"five","six","seven","eight","nine","ten","eleven"
    ,"twelve","thirteen","fourteen","fifteen","sixteen",
    "seventeen","eighteen","nineteen"};
    char* num_2[4] = {"twenty","thirty","forty","fifty"};
    //输出小时
    int h_g;
    if(h<=19){
        printf("%s ",num_1[h]);
    }
	else if(h==20){
		printf("twenty ");
	}
    else if(h>20&&h<=24){
        h_g = h%10;
        printf("%s %s ",num_2[0],num_1[h_g]);
    }
    //输出分钟
    int m_s,m_g;
    if(m>0&&m<=19){
        printf("%s ",num_1[m]);
    }
    else if(m>19&&m<60){
        m_s = m/10-2;
        m_g = m%10;
		if(m_g!=0){
			printf("%s %s",num_2[m_s],num_1[m_g]);
		}
		else if(m_g==0){
			printf("%s",num_2[m_s]);
		}
	}
    else if(m==0){
        printf("o'clock");
    }

    return 0;
}