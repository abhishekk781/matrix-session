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
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		st.push(x);
	}
	cout<<"SIZE="<<st.size()<<endl; 
	while(!st.empty()){
		cout<<"size="<<st.size()<<" value="<<st.top();
		cout<<endl;
		st.pop();
	}
	cout<<st.size();
}
