#include<bits/stdc++.h>
using namespace std;
int main(){
	double h,r;
	scanf("%lf %lf",&h,&r);
	double v =(3.14*r*r*h)/1000;
	int n=ceil(20/v);
	printf("%d",n);
	return 0;
} 
