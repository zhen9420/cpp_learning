#include<bits/stdc++.h>
using namespace std;
int main(){
	unsigned long long n;
	long long p;
	cin>>n>>p;
	unsigned long long a = pow(2,pow(2,n));
	unsigned ans = a - floor(a/(p*1.0))*p;
	cout<<ans;
}
