/*��������*/
#include<stdio.h>
int main(void){
    double weight,height;
    scanf("%lf %lf",&weight,&height);
    /*����BMIֵ*/
    double BMI = weight/(height*height);
    /*�жϷ��̶ֳ�*/
    if(BMI<18.5){
        printf("Underweight");
    }
    else if(BMI<24){
        printf("Normal");
    }
    else{
        printf("%.6g\n",BMI);
        printf("Overweight");
    }

    return 0;
}