#include<bits/stdc++.h>
using namespace std;
int main (){
	int n,x,y;
	scanf("%d %d %d",&n,&x,&y);
	if(n-x-y>0){
		printf("%d %d",min(x,y),0);
	}
	else printf("%d %d",min(x,y),x+y-n);
	return 0; 
} 
