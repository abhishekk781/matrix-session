#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
int prime[MAX];
int bucket[MAX];

void primesieve(){
	prime[1] = 1;
	for (int i = 2; i*i < MAX; ++i)
	{
		if(prime[i]==0){
			for(int j = 2*i;j<MAX;j=j+i){
				prime[j] = i;
			}
		}
	}
	for (int i = 2; i < MAX; ++i)
	{
		if(prime[i] == 0){
			prime[i] = i;
		}
	}
}

void addprimeinbucket(int n){
	while(n>1){
		int cur = prime[n];
		bucket[cur]++;
		// n = n/cur;
		while(n%cur == 0){
			n = n/cur;
		}
	}
}

int main()
{
	primesieve();
	int n;
	cin>>n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
		addprimeinbucket(v[i]);
	}
	int ans = 0;
	for (int i = 2; i < MAX; ++i)
	{
		ans =max(ans,bucket[i]);
	}
	cout<<ans;


	return 0;
}