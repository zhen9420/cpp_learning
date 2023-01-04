#include<stdio.h>
int main(){
	int X,N;
	scanf("%d %d",&X,&N);
	if(X + N%7<=7){printf("%d",X+N%7);
	}else{printf("%d",X+N%7-7);
	}
	return 0;
}
