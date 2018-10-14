#include <bits/stdc++.h>
using namespace std;
#define mod 1000003
int main(){
	vector<int> v(1000003);
	long long num = 1;
	for (int i = 1; i <= 1000003; ++i)
	{
		num = (num*i)%mod;
		v[i] = num;
	}
	int n;
	cin>>n;
	while(n--)
	{
		long long n,x;
		cin>>n>>x;
		if(x >= mod){
			cout<<0<<endl;
			continue;
		}

		cout<<(v[n]*x)%mod<<endl;
	}


}