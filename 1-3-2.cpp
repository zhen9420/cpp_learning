#include <stdio.h>
int main(){
	double a;
	double b;
	double c;
	printf("请输入a,b,c三个数。");
	scanf("%lf,%lf,%lf",&a,&b,&c); 
//	double d = (a+b+c) /3.0;
//	printf("平均数为：%f",d);
    printf("平均数：%f",((a+b+c)/3));
	return 0;
}
