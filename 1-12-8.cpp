#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int m,t,s,a;
    cin>>m>>t>>s;
    if(t==0) {cout<<0;return 0;}//判断t=0的情况
    a=m-ceil((double)s/t);//计算还剩多少个，ceil向上取整，因为即使剩半个也不能算整的
    if(a<=0) cout<<0;//如果吃得只剩负数了，说明已经吃完了
    else cout<<a;//否则输出还剩多少苹果
    return 0;
}
 
