#include<bits/stdc++.h>
using namespace std;

struct node 
{
	int val=0;
	node *left=NULL;
	node *right=NULL;
};
int ar[100]={0};
node *root=NULL;
void insert(node *cur_node,int ind){
	if(root==NULL)
	{
		node *temp=new node();
		temp->val=ar[ind];
		root=temp;
		cur_node=temp;
	}
	if(ar[2*ind]!=(-1))
	{
		node *temp=new node();
		temp->val=ar[2*ind];
		cur_node->left=temp;
		insert(cur_node->left,2*ind);
	}
	if(ar[2*ind+1]!=(-1))
	{
		node *temp=new node();
		temp->val=ar[2*ind+1];
		cur_node->right=temp;
		insert(cur_node->right,2*ind+1);
	}
}
void bfs(node *cur_root)
{
	queue < node* > q;
	q.push(cur_root);
	while(!q.empty())
	{
		node *frt=q.front();
		if(frt->left!=NULL){ q.push(frt->left); }
		if(frt->right!=NULL){ q.push(frt->right); }
		cout<<frt->val<<" ";
		q.pop();
	}
}
int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>ar[i];
	}
	insert(root,1);
	bfs(root);
}
