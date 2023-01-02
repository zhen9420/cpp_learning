#include <iostream>
using namespace std;

int main()
{
	printf("请输入价格："); 	
   int price = 0;
   scanf("%d",&price);
    int change = 100 - price;

   printf("还剩%d",change) ;
    return 0;

}
//#include <stdio.h>

//int main()
//{
//    int price = 0;
//
//    printf("请输入金额（元）：");
//    scanf("%d", &price);
//
//    int change = 100 - price;
//
//    printf("找您%d元。\n", change);
//
//    return 0;
//}
