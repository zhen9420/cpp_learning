#include<stdio.h>
int main(){
    int PASS = 60;
	int score;
	printf("请输入成绩：");
	scanf("%d",&score);
	if(score<PASS)
    printf("不合格"); 
    else 
	printf("合格") ;
	return 0;
	 
	 
} 
