#include<bits/stdc++.h>
using namespace std;

int main(){
	queue <int> q; //queue
	/*
	 st.push(); //insertion
	 st.pop(); //deletion
	 st.front(); // toppest element
	 st.size(); //size
	 st.empty() // return 1 when size is zero
	*/
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		q.push(x);
	}
	cout<<"SIZE="<<q.size()<<endl; 
	while(!q.empty()){
		cout<<"size="<<q.size()<<" value="<<q.front();
		cout<<endl;
		q.pop();
	}
	cout<<q.size();
}
