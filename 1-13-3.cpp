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
		    printf("����\n"); 
		}
		if(a<num){
			printf("С��\n");
		}
	}while (a!=num);
	printf("����%d�β³�������%d",n,num);
	return 0;
} 
