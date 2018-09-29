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
bool check_pal(node *root){
	//vector <data_type> vector_name;
	vector <int> ar;
	
	while(root!=NULL){
		int value=root->val;
		ar.push_back(value);
		root=root->next;
	}
	int size=ar.size();
	for(int i=0,j=size-1;i<j;i++,j--){
		if(ar[i]!=ar[j]){ return false; }
	}
	return true;
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
	cout<<endl;
	bool flag=check_pal(head);
	if(flag==true)
	{ 
		cout<<"IS PALINDROME!!!"<<endl;
	}
	else
	{ 
		cout<<"NOT PALINDROME!!!"<<endl; 
	}
}
