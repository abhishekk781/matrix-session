#include<bits/stdc++.h>
using namespace std;

int main()
{
	queue <int> q;
	while(1){
		string st;
		cin>>st;
		if(st=="STOP"){ break; }
		if(st=="PRINT" && !q.empty())
		{ 
			cout<<q.front()<<endl;
			q.pop();
		}
		if(st=="INSERT")
		{
			int x;
			cin>>x;
			q.push(x);
		}
	}
	return 0;
}