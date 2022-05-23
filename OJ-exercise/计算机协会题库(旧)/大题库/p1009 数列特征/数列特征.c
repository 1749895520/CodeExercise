#include<stdio.h>
int main()
{
    int n;
    int sum = 0;
    int num_1[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&num_1[i]);
        getchar();
    }
    int min = num_1[0],max = num_1[0];

    for(int j=0;j<n;j++){
        if(min>num_1[j]){
            min = num_1[j];
        }
        if(max<num_1[j]){
            max = num_1[j];
        }
        sum += num_1[j];
    }

    printf("%d\n",max);
    printf("%d\n",min);
    printf("%d\n",sum);

    return 0;
}