#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10],ch_1[10][10];       //定义语句二维数组和单词数组
    int i = 0,j = 0,num = 0;        //定义二维数组变量i，j，字母总数num
    int a = 0,i_ = 0;               //定义一维数组位数a，以及与二维数组比较位置i_
    while((ch_1[i][j] = getchar()) != '.')  //判断输入语句是否结束
    {
        if(ch_1[i][j]!=' ')         //判断输入了几个单词
        {j++;num++;}                //num计算字符数量
        else
        {ch_1[i][j] = '\0';i++;j = 0;}  //令空格变为\0使其消失
    }
    ch_1[i][j] = '\0';              //令句号变成\0使其消失

    scanf("\n");                    //换行

    gets(ch);                       //输入寻找的单词

    for(i_=0;i_<=i;i_++)            //寻找二维数组中是否有相同单词
    {
        if(strcmp(ch,ch_1[i_])==0)  //比较字符串是否相同
        {printf("%d",i_+1);return 0;}   //相同输出位置
    }
    printf("%d",num);               //不同输出总字符数

    return 0;
}