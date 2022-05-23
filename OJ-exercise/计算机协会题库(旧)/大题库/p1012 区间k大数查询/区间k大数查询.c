#include<stdio.h>
int main(void){
    //记录数列一共有几个数
    int n1;
    scanf("%d",&n1);
    //定义数列中的每个数
    int num[n1],num_[n1];
    for(int i1=0;i1<n1;i1++){
        scanf("%d",&num[i1]);
        num_[i1] = num[i1];
        getchar();
    }
    //记录一共要询问的次数
    int m;
    scanf("%d",&m);

    //询问m次的循环
    int j = 0;         //定义询问j次时l,r,k的值
    int l[m],r[m],k[m]; //定义l,r,k的长度为m的数组
    for(int i2=0;i2<m;i2++){
        scanf("%d %d %d",&l[j],&r[j],&k[j]);
        l[j] -= 1;      //定位数组中的下标
        r[j] -= 1;
        j++;
    }

    //循环询问的m次
    int n2,temp;
    for(int i3=0;i3<m;i3++){
    //将数列[l,r]从大到小排序
    for(int p=l[i3]+1;p<=r[i3];p++){
        for(int q=l[i3];q<r[i3];q++){
            if(num[q]<num[p]){
                temp = num[q];
                num[q] = num[p];
                num[p] = temp;
            }
        }
    }
    //输出第k大的数
        n2 = l[i3]+k[i3]-1;
        printf("%d\n",num[n2]);
    //通过复制数组num_将数组num复原
    for(int i4=0;i4<n1;i4++){
        num[i4] = num_[i4];
    }
    }
    return 0;
}