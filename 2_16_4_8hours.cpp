#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[7],b[7];
	int max = 0;
	int week;
	for(int i = 0;i<7;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		if(a[i]+b[i]>8)
		{
			if( max < (a[i]+b[i]))
			{
				max = a[i]+b[i];
				week = i+1;
			}
		}
		if(i == 6) 
		{
			if(max != 0)
			{
				printf("%d",week);
			}else
			{
				printf("0");
			}
		}
	}
	return 0;
}

