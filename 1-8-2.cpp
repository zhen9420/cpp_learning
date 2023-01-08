#include<bits/stdc++.h>
using namespace std;
int main(){
	double H,S,V,L,K,n; 
	scanf("%lf %lf %lf %lf %lf %lf",&H,&S,&V,&L,&K,&n);
	double t1 = sqrt((H-K)*2.0/10.0);
	double t2 = sqrt(H*2.0/10);
	double s1 = V*t1;
	double s2 =V*(t2-t1);
	int num =0;
	for(int i = 0;i<n;i++){
		if(i>=(S-s2-s1-0.00001)&&i<=(S+L-s1+0.00001)){
		 num++;};
		
		
	}
	printf ("%d",num);
		
	return 0;
}
