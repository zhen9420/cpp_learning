#include<bits/stdc++.h>
using namespace std;
int main(){
	double m;
	double h;
	scanf("%lf %lf",&m,&h);
	double BMI = m/h/h;
	if(BMI<18.5){
		printf("Underweight");
	}
	else if(BMI<24){
		printf("Normal");
	}
	else {
		printf("%.6g\n",BMI);
		printf("Overweight");
	}
	return 0;
}
