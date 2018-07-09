#include<bits/stdc++.h>
using namespace std;
vector <int> Tree[10000];
int height=0;
void max_height(int node,int depth)
{
	int sz=Tree[node].size(); // 0 for leaf node
	if(sz==0)
	{
		height=max(height,depth);
		return;
	}
	else
	{
		for(int i=0;i<sz;i++)
		{
			max_height(Tree[node][i],depth+1);
		}
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
	max_height(1,0);
	cout<<"Height of the tree is :"<<height<<endl;
	return 0;
}