/*三角形面积*/
#include<stdio.h>
#include<math.h>
int main(void){
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    double p = (a+b+c)/2.0;
    double s = sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.1f",s);
    return 0;
}