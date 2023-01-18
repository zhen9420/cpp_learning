#include<bits/stdc++.h>
using namespace std;
int main(){
	srand(time(0));
	int num = rand ()%100+1;
	int a = 0;
	int n = 0;
	do{
		scanf("%d",&a);
		n++;
		if (a>num){
		    printf("大了\n"); 
		}
		if(a<num){
			printf("小了\n");
		}
	}while (a!=num);
	printf("用了%d次猜出数字是%d",n,num);
	return 0;
} 
