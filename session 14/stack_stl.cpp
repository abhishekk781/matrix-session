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
	}
	for(int i=0;i<n;i++){
		if(st.empty()){ 
			st.push(ar[i]); 
			continue; 
		}
		if(ar[i]<0){ st.push(ar[i]);}
		else{
			int tp=st.top();
			if(tp<0){ st.push(ar[i]); }
			else{
				st.pop();
				int opt=st.top();
				st.pop();
				switch(opt){
					case -1 : st.push(ar[i]*tp);
								break;
					case -2 : st.push(ar[i]+tp);
								break;
					case -3 : st.push(ar[i]-tp);
								break;
					case -4 : st.push(ar[i]/tp);
								break;

				}
			}
		}
	}
	int a=st.top();
	st.pop();
	int b=st.top();
	st.pop();
	int opt=st.top;
	switch(opt){
					case -1 : st.push(ar[i]*tp);
								break;
					case -2 : st.push(ar[i]+tp);
								break;
					case -3 : st.push(ar[i]-tp);
								break;
					case -4 : st.push(ar[i]/tp);
								break;

	}
	cout<<st.top()<<endl;
}
