#include<bits/stdc++.h>
using namespace std;
//int main (){
//	int n;
//	int fact=1;
//	int i=1;
//	scanf("%d",&n);
//	while (i<n){
//		fact *=(i+1);
//		i++;
//	}
//	printf("%d",fact);
//	return 0;
//} 
int main (){
	int n;
	int fact =1;
	int i=1;//���Ժϲ���for�� ��i=2Ҳ���ԣ�����һ��ѭ�� 
	scanf("%d",&n);
	for (;i<=n;i++)//��ʼ��������ʡ�ԣ����ǣ�����{
		fact *=i;
	}
	printf("%d",fact);
	return 0;
}
