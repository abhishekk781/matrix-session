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
void insert_val(int value)
{
	node *temp = new node(); 
	temp->val=value;
	temp->next=NULL;
	if(head==NULL){
		head=temp;
		tail=temp;
	}
	else{
		temp->next=head;
		head=temp;
	}
}
void print(node *root){
	while(root!=NULL){
		cout<<root->val<<" ";
		root=root->next;
	}
}
int main(){
	head=NULL;
	tail=NULL;
	while(1){
		int x;
		cin>>x;
		if(x==(-1)){ break; }
		insert_val(x);
	}
	print(head);
}