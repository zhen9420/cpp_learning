#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
bool prime[10000000];
void  ai(int b){
	memset(prime,true,sizeof(prime));
	prime[1]=false;
	int n =sqrt(b);
	for (int i=2;i<=n;i++) {
        if (prime[i]) {
            for (int j=2;j<=b/i;j++)
                prime[i*j]=false;  
        }
    }
}

//判断回文数的方法要记住 
bool isHws(int num){
	int temp = num,ans = 0;
	bool ret = false;
	
	while (temp!=0) {
		ans = ans *10+temp%10;
		temp/=10;
	}
	if(ans==num){
		ret = true;	
	}
	return ret;
}
int main(void){
	int  a,b;
	cin>>a>>b;
	if(b>=10000000) b=9999999;
	ai(b);
	if(a>b)
    	return 0;
	if(a%2==0) a++;
	for(int i =a;i<=b;i+=2){
		if(prime[i]&&isHws(i)){
			cout<<i<<endl;
		}
	}
	
	return 0;
	
}
