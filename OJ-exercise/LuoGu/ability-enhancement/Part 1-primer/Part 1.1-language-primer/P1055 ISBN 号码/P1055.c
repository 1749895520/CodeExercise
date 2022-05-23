/*ISBNºÅÂë*/
#include<stdio.h>
int main(void){
	char code[13];
	for(int i=0; i<13; i++){
		scanf("%c",&code[i]);
	}
	int a = (code[0]-'0')+(code[2]-'0')*2+(code[3]-'0')*3+(code[4]-'0')*4+(code[6]-'0')*5+(code[7]-'0')*6+(code[8]-'0')*7+(code[9]-'0')*8+(code[10]-'0')*9;
	char b = a%11;
	if(b==10){
		b = 'X';
	}
	if(b==code[12]-'0'||b==code[12]){
		printf("Right");
	}
	else{
		for(int i=0; i<12; i++){
			printf("%c",code[i]);
		}
		if(b=='X'){
			printf("X");
		}
		else{
			printf("%d",b);
		}
	}
	return 0;
}