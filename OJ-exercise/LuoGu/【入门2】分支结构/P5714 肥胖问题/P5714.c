/*肥胖问题*/
#include<stdio.h>
int main(void){
    double weight,height;
    scanf("%lf %lf",&weight,&height);
    /*计算BMI值*/
    double BMI = weight/(height*height);
    /*判断肥胖程度*/
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