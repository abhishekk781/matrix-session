#include<bits/stdc++.h>
using namespace std;

vector <int> Tree[10000];
void dfs(int root){
	cout<<root<<" ";
	int sz = Tree[root].size();
	for (int i = 0; i < sz; ++i)
	{
		dfs(Tree[root][i]);
	}
	return;
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
	dfs(1);
}
