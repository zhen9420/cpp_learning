#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int m = 1;
	for(int i = 2;i < n ;i ++){
		if(n%2 == 0){
			m = 0;
			break;
		}
	}
	if( m == 1){
		printf("yes");
	}
	else
		printf("no");
	return 0;
} 
