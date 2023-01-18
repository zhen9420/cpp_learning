#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(b + c<= a-1){
		printf("%d",c+1);
	}
	else{
		printf("%d",a-b);
	}
	return 0;
}
