#include<bits/stdc++.h>
using namespace std;
int angle(int a[],int len);
int edge(int a[],int len);

int main(){
	int a[3];
	for( int i=0;i<3;i++ ){
		scanf("%d",&a[i]);
	}
	sort(a,a+3);
	int len = 3;
	
	if(a[0]+a[1]>a[2])
	{
		if( angle(a,len)==0) printf("Acute triangle\n");
		if( angle(a,len)==1) printf("Right triangle\n");
		if( angle(a,len)==2) printf("Obtuse triangle\n");
		if (edge(a,len) == 1) printf("Isosceles triangle\n");
		if (edge(a,len) == 2) printf("Isosceles triangle\nEquilateral triangle\n");
		
		
	}else
	{
		printf("Not triangle\n");
	}
	
	
	return 0; 
	}
	

int angle(int a[],int len)
{
	int ret = 0;
	if ( a[0]*a[0]+a[1]*a[1]==a[2]*a[2] )ret = 1;
	else if (a[0]*a[0]+a[1]*a[1]<a[2]*a[2] ) ret = 2;
	return ret;
}
int edge(int a[],int len)
{
	int ret = 0;
	if(a[0]==a[1]||a[0]==a[2]||a[1]==a[2])
	{
		if( a[0]==a[1]&&a[0]==a[2])
		{
			ret = 2;
		}else ret = 1;
	}
	return ret;	
}	

