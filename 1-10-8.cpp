#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,n;
	scanf("%d %d %d",&a,&b,&n);
	if(n>=a+b&&(n-a-b)%2==0)
	    printf("YES");
	else
	    printf("NO");
	return 0;
} 
