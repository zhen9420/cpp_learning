#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	int m;
	scanf("%d %d", &n, &m);
	int a[n];
		for(int j = 0; j < n; j++){
			scanf("%d", &a[j]);
		}
		int op;
		for(int j = 0; j < m; j++){
			scanf("%d", &op);
			if(op == 1){
				int l, r, k;
				scanf("%d %d %d", &l, &r, &k);
				for(int g = l-1; g < r; g++){
					a[g]=round(pow(pow(10, k+1)* a[g],pow(1.0/2,k)));
					}
			}else{
				int sum= 0;
				for(int k = 0; k < n; k++){
					sum+=a[k];
				}
				printf("%d\n", sum);
			}
		}
	return 0;
}
