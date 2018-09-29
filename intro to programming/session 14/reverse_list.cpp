#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val;
	node *next;
	node() //constructor
	{
		val=0;
		next=NULL;
	}
};
node *head,*tail;
void insert_value(int x){
	node *temp=new node();
	temp->val=x;
	temp->next=NULL;
	if(head==NULL){
		head=temp;
		tail=temp;
	}
	else{
		tail->next=temp;
		tail=temp;
	}
}
void print(node *root)
{
	while(root!=NULL)
	{
		cout<<root->val;
		root=root->next;
	}
}
node* reverse_list(node *root)
{
	node *pnt1=NULL,*pnt2=NULL;
	while(root!=NULL)
	{
		node *temp=new node();
		temp->val=root->val;
		temp->next=NULL;
		if(pnt1==NULL)
		{
			pnt1=temp;
			pnt2=temp;
		}
		else
		{
			temp->next=pnt1;
			pnt1=temp;
		}
		root=root->next;
	}
	return pnt1;
}
	
	
int main()
{
	head=NULL;
	tail=NULL;
	int n;
	cin>>n;
	int x;
	for(int i=0;i<n;i++){
		cin>>x;
		insert_value(x);
	}
	print(head);
	node *rev=reverse_list(head);
	print(rev);
}
