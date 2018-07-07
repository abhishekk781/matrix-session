#include<bits/stdc++.h>
using namespace std;

int main(){
	stack <int> st; //stack
	/*
	 st.push(); //insertion
	 st.pop(); //deletion
	 st.top(); // toppest element
	 st.size(); //size
	 st.empty() // return 1 when size is zero
	*/
	int n;
	cin>>n;
	int ar[n];
	for(int i=0;i<n;i++){
		cin>>ar[i];
		st.push(ar[i]);
	}
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
	return 0;
}
