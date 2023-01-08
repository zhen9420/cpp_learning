#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	printf("%.0f",4*(sqrt(a*b/c)+sqrt(a*c/b)+sqrt(b*c/a)));
	return 0;
}
