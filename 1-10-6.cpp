#include<bits/stdc++.h>
using namespace std;
int main(){
	int w;
	scanf("%d",&w);
	if(w%2!=0||w==2)
	    printf("NO, you can't divide the watermelon into two even parts.");
	else 
	    printf("YES, you can divide the watermelon into two even parts.");
	return 0;
}
