#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	int ans = min(min(a,b),c);
	printf("%d",ans);
	return 0;
} 
