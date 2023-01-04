#include<stdio.h>
int main(){
	int a,b;
	printf("请输入应付 实付");
	scanf("%d %d",&a,&b);
	if (b>=a) {printf("找您%d元",b-a);
	} else {printf("还差%d元",a - b);}
	return 0;
}
	
