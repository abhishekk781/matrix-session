#include<bits/stdc++.h>
using namespace std

 //Definition for binary tree
 /*
  * Example
  *     1
  *    / \
  *   2   4
  *  /
  * 3
  * output=3
 */
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

int Solution::maxDepth(TreeNode* A) {
    if(A==NULL){ return 0; }
    int maxDepth_in_left=maxDepth(A->left);
    int maxDepth_in_right=maxDepth(A->right);
    return max(maxDepth_in_left,maxDepth_in_right)+1;
}









struct node 
{
	int val=0;
	node *left=NULL;
	node *right=NULL;
};
node *root=NULL;
int ar[100]={0};
void insert(node *temp,int ind){
	if(ar[ind]==-1){ temp=NULL; return; }
	else{
		node *tp=new node();
		tp->val=ar[ind];
		tp->left=NULL;
		tp->right=NULL;
		temp=tp;
		if(ar[2*ind]!=(-1)){ insert(temp->left,2*ind); }
		if(ar[2*ind+1]!=(-1)){ insert(temp->right,2*ind+1); }
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
}
