#include<bits/stdc++.h>
using namespace std;
int main(){
	int x;
	int ret =0;
	scanf("%d",&x);
	while(x>0){
		int d = x%10;
		ret = ret*10+d;
		x/=10;
	}
	printf("%d",ret);
	return 0;
}
