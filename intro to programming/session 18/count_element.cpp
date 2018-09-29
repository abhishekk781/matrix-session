#include<bits/stdc++.h>
using namespace std;
struct node
{
	int value;
	int cnt;
	node *left;
	node *right;
	node(){ value=0; cnt=0; left=NULL; right=NULL; }
};
node *root;
void insert(int val,node *cur_node)
{
	if(cur_node->value==val){ cur_node->cnt++; return; } //base case
	if(cur_node->value > val)
	{
		if(cur_node->left==NULL)
		{	
			node *temp=new node();
			temp->value=val;
			temp->cnt=1;
			temp->left=NULL; temp->right=NULL;
			cur_node->left=temp; 
		}
		else{
			insert(val,cur_node->left);
		}
	}
	else{
		if(cur_node->right==NULL)
		{	
			node *temp=new node();
			temp->value=val;
			temp->cnt=1;
			temp->left=NULL; temp->right=NULL;
			cur_node->right=temp; 
		}
		else{
			insert(val,cur_node->right);
		}
	}
}
int search_BST(int val,node *cur_node)
{
	if(cur_node==NULL){ return 0; }
	if(cur_node->value==val){ return cur_node->cnt; }

	if(cur_node->value > val)
	{
		return search_BST(val,cur_node->left);
	}
	else{
		return search_BST(val,cur_node->right);
	}
}
int main()
{
	root=NULL;
	int n;
	cin>>n;
	vector <int> ar(n);
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		ar[i]=x;
	}
	node *temp=new node();
	temp->value=ar[0];
	temp->cnt=1;
	root=temp;
	for(int i=1;i<n;i++)
	{
		insert(ar[i],root);
	}
	cout<<"Enter number of testcases:";
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int x; cin>>x;
		int ret=search_BST(x,root);
		cout<<"count:"<<ret<<endl; 
	}
	return 0;
}