#include<bits/stdc++.h>
using namespace std;
vector <int> Tree[10000];

void bfs(int node)
{
	queue <int> q;
	q.push(node);
	while(!q.empty())
	{
		int front_element=q.front();
		int sz=Tree[front_element].size();
		for(int i=0;i<sz;i++)
		{
			q.push(Tree[front_element][i]);
		}
		cout<<front_element<<" ";
		q.pop();
	}
}


int main(){
	int n;
	cin>>n;
	for(int edges=1;edges<=(n-1);edges++)
	{
		int node1,node2;
		cin>>node1>>node2;
		Tree[node1].push_back(node2);
	}
	bfs(1);
}
