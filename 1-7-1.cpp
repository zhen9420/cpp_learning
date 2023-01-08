#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int A =max(max(a,b),max(c,d))+min(min(a,b),min(c,d));
	int B= min(max(a,b),max(c,d))+max(min(a,b),min(c,d));
	printf("%d",abs(A-B));
	return 0;
}
