#include<bits/stdc++.h>
using namespace std;
struct node
{
	int val; // this is a variable which gonna store value at that node
	node *next; // its a pointer of same structure pointing to next node in linked list
	
	/* Constructor
	 * used to initialise values to data members
	 * called automatically*/
	node() 
	{
		val=0;
		next=NULL;
	}
};
node *head,*tail;
void insert_val(int value)
{
	//new is a keyword , use to allocate memory to new node and returns its address
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
	//in order to print values at each node
	// move the head pointer (*root) from beginning to end
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
		if(x==(-1)){ break; } // jab tak input lega , jab tak user -1 press nhi krta
		insert_val(x);
	}
	
	print(head);
}
