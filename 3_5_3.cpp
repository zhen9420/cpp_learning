#include<bits/stdc++.h>
using namespace std;
int main(){
	string a ="Association_for_Computing_Machinery";
	string b = "Air_Combat_Maneuvering";
	string s;
	cin>>s;
	int ans1 = 0;
	int ans2 = 0;
	for(int i = 0;i<s.length();i++)
	{
		if(s.substr(i,a.length())==a){
			ans1++;
		}
		else if(s.substr(i,b.length())==b)
		{
			ans2++;
		}
	}
	if(ans1==0&&ans2!=0){cout <<"YES";
	}
	else if(ans1 !=0&&ans2==0) cout <<"YES";
	else cout<<"NO";
}
