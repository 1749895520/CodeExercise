/*�ýṹ���ѧ���ɼ�����*/
#include<stdio.h>
struct student{
    char name[20];
    char sex[20];
    int age;
    int grade;
}num[1000],temp;
int main(void){
    /*����ѧ������*/
    int n;
    scanf("%d",&n);
    /*����ѧ������*/
    for(int i=0;i<n;i++){
        scanf("%s %s %d %d",num[i].name,num[i].sex,&num[i].age,&num[i].grade);
    }
    /*���ݳɼ���ѧ����������*/
	for(int i=0; i<n-1; i++) {
		int j=i+1;
		if(num[i].grade>num[j].grade) {
			temp = num[i];
            num[i] = num[j];
            num[j] = temp;
			i=-1;   //��������
		}
    }
    /*���ѧ������*/
    for(int j=0;j<n;j++){
        printf("%s %s %d %d\n",num[j].name,num[j].sex,num[j].age,num[j].grade);
    }
    return 0;
}