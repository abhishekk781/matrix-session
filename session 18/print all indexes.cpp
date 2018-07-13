#include<bits/stdc++.h>
using namespace std;
struct node
{
	int value;
	vector <int> index;
	node *left;
	node *right;
	node(){ value=0; index.clear(); left=NULL; right=NULL; }
};
node *root;
void insert(int val,int ind,node *cur_node)
{
	if(cur_node->value==val){ (cur_node->index).push_back(ind); return; } //base case
	if(cur_node->value > val)
	{
		if(cur_node->left==NULL)
		{	
			node *temp=new node();
			temp->value=val;
			temp->index.push_back(ind);
			temp->left=NULL; temp->right=NULL;
			cur_node->left=temp; 
		}
		else{
			insert(val,ind,cur_node->left);
		}
	}
	else{
		if(cur_node->right==NULL)
		{	
			node *temp=new node();
			temp->value=val;
			temp->index.push_back(ind);
			temp->left=NULL; temp->right=NULL;
			cur_node->right=temp; 
		}
		else{
			insert(val,ind,cur_node->right);
		}
	}
}
vector<int> search_BST(int val,node *cur_node)
{
	if(cur_node==NULL){ 
		vector <int> ret;
		return ret; 
	}
	if(cur_node->value==val){ return cur_node->index; }

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
	temp->index.push_back(0);
	root=temp;
	for(int i=1;i<n;i++)
	{
		insert(ar[i],i,root);
	}
	cout<<"Enter number of testcases:";
	int m;
	cin>>m;
	for(int i=0;i<m;i++)
	{
		int x; cin>>x;
		vector <int> ret=search_BST(x,root);
		if(ret.size()==0){ cout<<"NOT PRESENT!!"<<endl; }
		else{
			cout<<"indexes:";
			for(int i=0;i<ret.size();i++){ cout<<ret[i]<<" "; }
			cout<<endl;
		}
	}
	return 0;
}