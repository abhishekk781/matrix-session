#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	cin>>m>>n;
	long long money=0;
	priority_queue<int> p;
	for (int i = 0; i < m; ++i)
	{
		int x;
		cin>>x;
		p.push(x);
	}
	for (int i = 0; i < n; ++i)
	{
		int y = p.top();
		money += y;
		p.pop();
		if(--y){
			p.push(y);
		}
	}
	cout<<money<<endl;

}