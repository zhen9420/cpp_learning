#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
	int n;
	cin>>n;
	int i = 0;
	int sum1=0;
	while(1){
		i++;
		sum1+=i;
		if(n-sum1<(i+1)) break;
	}
	ll sum2=0;
	for(int j =1;j<=i;j++){
		sum2 += j*j;
	}
	sum2 +=(n-sum1)*(i+1);
	cout<<sum2;
}
