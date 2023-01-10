#include<bits/stdc++.h>
using namespace std;
int main(){
	long long x,y;
	scanf("%lld %lld",&x,&y);
	if(y%x==0)
	    printf("%lld",x+y);
	else
	    printf("%lld",y-x);
	return 0;
	
}
