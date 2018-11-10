#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	stack<int> s1;
	for (int i = 0; i <= n-1; ++i)
	{
		int s = v[i],p = 1;
		while(i< n-1 && v[i]==v[i+1]){
			p++;
			i++;
		}
		int q = p;
		while(q--){
			if(!s1.empty()){
				s1.pop();
			}
			else
				break;
		}
		for (int i = 0; i < p; ++i)
		{
			s1.push(s);
		}

	}

	int sum = 0;
	while(!s1.empty()){
		// cout<<s1.top()<<endl;
		sum = sum+s1.top();
		s1.pop();
	}
	cout<<sum<<endl;
	return 0;
}