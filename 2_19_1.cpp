#include<bits/stdc++.h>
using namespace std;
int judge(int a)
{
	int ret = 0;

	if(a >150 && a<= 400)	ret = 1;
	if(a >400)			ret = 2;
	return ret;
} 
int main()
{
	int x;
	double ans;
	scanf("%d",&x);
	switch (judge(x)){
		case 0:
			ans = 0.4463*x;
			break;
		case 1:
			ans = 150*0.4463+(x- 150)*0.4663;
			break;
		case 2:
			ans = 150*0.4463+250*0.4663+(x -400)*0.5663;
			break;
			
			
	}
	printf("%.1f",ans);
	return 0;
}
