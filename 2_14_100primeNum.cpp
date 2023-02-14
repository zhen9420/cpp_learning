#include<bits/stdc++.h>
using namespace std;
int main(){
	const int number = 100;
	int prime[number] = {2};
	int count = 1;
	int i = 3;
	while ( count < number ){
		if ( isPrime(i,prime,count)){
			prime[count++] = i;
		}
		i++;
	}
	for ( i = 0;i<number;i++){
		printf("%d",prime[i]);
		if ( (i+1)%5) printf("\t");
		else printf("\n");
		
	}
	return 0;
} 
