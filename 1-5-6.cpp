#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c,p;
	scanf("%lf %lf %lf",&a,&b,&c);
	p = (a+b+c)/2;
	printf("%.1f",sqrt(p*(p-a)*(p-b)*(p-c)));
	return 0;
} 
