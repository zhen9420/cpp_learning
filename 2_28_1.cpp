#include<bits/stdc++.h>
using namespace std;
void print(int begin,int end){
	for(int i = begin;i<=end;i++ )
	{
		cout<<setfill('0')
			<<setw(2)<<i; 
		if( i == end) cout<<endl;
	}	
}
int main(){
	int n = 0;
	cin>>n;
	int begin = 1;
	int end = 0;
	int len = n; 
	for(int j = 0;j<n;j++)
	{
		end = begin + len -1;
		print(begin,end);
		begin = end + 1;
		len--;
	}
    
	return 0;
} 
