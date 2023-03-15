#include<bits/stdc++.h>
using namespace std;
int main(){
	double n;
	cin>>n;
	double sum = 0;
	int i = 0;
	while(sum<n){
		sum += 2*pow(0.98,i);
		i++;
		
	}
	cout<<i;
}
