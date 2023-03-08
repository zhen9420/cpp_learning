#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int n, t, q, l2;
ll sum, ans, a[1000005], b[100005], c[1000005], len, flag;
string s[1000005], s1, s2;
map<string, string >m;
int main() {
   cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(1+a,1+a+n);
    for(int i=1;i<=n;i++){
        sum+=a[i]*(n-i+1);//cout<<sum<<"\n";
    }
    cout<<sum;
     
    return 0;
}
