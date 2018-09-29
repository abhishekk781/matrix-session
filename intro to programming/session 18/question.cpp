#include<bits/stdc++.h>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc--)
	{
		int n;
		cin>>n;
		priority_queue <int ,vector <int> ,greater<int> > q;
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			q.push(x); 
		}
		int cost=0;
		while(1)
		{
			if(q.size()==1){ break; }
			int x1=q.top();
			q.pop();
			int x2=q.top();
			q.pop();
			cost+=(x1+x2);
			q.push(x1+x2);
		}
		cout<<cost<<endl;
	}
	return 0;
}