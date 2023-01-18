#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	if(n*12*254%10!=0){
	printf("%.1f",n*12.0*254/10);		
	}
	else{
		printf("%d",n*12*254/10);
	}
	return 0;
	
} 
