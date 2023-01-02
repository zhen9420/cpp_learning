 #include <stdio.h>
 int main(){
 	int amount = 0;
 	int price = 0;
 	printf("应付金额：");
	 scanf("%d",&price) ;
	 printf("实付金额：");
	 scanf("%d",&amount);
	 int change = amount - price;
	 printf("找零；%d",change);
	 return 0;
 }
