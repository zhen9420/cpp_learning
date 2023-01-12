#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	char a1,a2,a3,a4;
	scanf("%c%c%c%c%d",&a1,&a2,&a3,&a4,&n);
	
	int t = n/3;
	switch (t){
		case 1:
			printf("spring") ;
			break;
		case 2:
			printf("summer");
			break;
		case 3:
			printf("autumn");
			break;
		case 4:
		case 0:
			printf("winter");
			break;
			
	}
	return 0;
	
} 
