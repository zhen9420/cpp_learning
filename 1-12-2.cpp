#include<bits/stdc++.h>
using namespace std;
int main(){
	double n;
	scanf("%lf",&n);
	int s=floor(n/10.0);
	switch (s){
		case 10:
		case 9:
			printf("A");
		    break;
		case 8:
			printf("B");
			break;
		case 7:
			printf("C");
			break;
		case 6:
		    printf("D");
			break;
		default:
		    printf("E");
			break; 
	}
	return 0;
}
