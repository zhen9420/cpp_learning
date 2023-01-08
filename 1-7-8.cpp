#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,A,B,C,n;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&A,&B,&C);
	n = min(a,B)+min(b,C)+min(c,A);
	printf("%d",n);
	return 0;
}
