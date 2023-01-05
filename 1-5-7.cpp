#include<bits/stdc++.h> 
using namespace std;
int main(){
	double s,v;
	scanf("%lf %lf",&s,&v);
	int t= ceil(s/v)+10;
	int T =32*60-t;
	if(T>24*60){printf("%02d:%02d",T/60-24,T%60);
	}
	else{printf("%02d:%02d",T/60,T%60);
	} 
	return 0; 
}
