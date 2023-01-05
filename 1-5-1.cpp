#include<stdio.h>
int main (){
	int a;
	int n=1;
	scanf("%d",&a);
	while (a/10>0){n++;a/=10;
	}
	printf("%d",n);
	return 0;
	
}
