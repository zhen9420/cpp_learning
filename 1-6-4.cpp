#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int t= -(60*a+b-60*c-d);
	printf("%d %d",t/60,t%60);
	return 0; 
}
