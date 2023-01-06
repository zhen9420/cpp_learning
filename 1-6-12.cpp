#include<bits/stdc++.h>
using namespace std;
int main(){
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	double p= (a+b+c)/2;
	double area = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("circumference=%.2f area=%.2f",a+b+c,area);
}
