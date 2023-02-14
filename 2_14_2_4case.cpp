#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	scanf("%d",&x);
	
	int type ;

	
	if( x%2==0)
	    type++;
	
	if (x>4&&x<=12) 
		type++;
	
	
	switch (type){
		case 0 :
			printf("0 0 0 1");
			break;
		case 1 :
			printf("0 1 1 0");
			break;
		case 2 :
			printf("1 1 0 0");
			break;
		default:
			break;
	}
	return 0; 
	
} 
