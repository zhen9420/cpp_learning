#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[9];
	char x;
	int nx;
	scanf("%c-%c%c%c-%c%c%c%c%c-%c",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&x);
	if(x=='X') nx=10;
	else nx = x-48;
	int p=0;
	for(int i=0;i<9;i++ )
	{
		p+=(a[i]-48)*(i+1);	
	}

	if(nx==p%11) printf("Right");
	else
	{
		if(p%11==10){
			printf("%c-%c%c%c-%c%c%c%c%c-X",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);
		}
		else printf("%c-%c%c%c-%c%c%c%c%c-%d",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],p%11);
	}	
	return 0;
}
