#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	priority_queue<int> left;
	priority_queue<int,vector<int>,greater<int> > right;
	int a;
	cin>>a;
	left.push(a);
	n--;
	cout<<a<<" "; 
	while(n--){
		cin>>a;
		if(a<left.top()){
			left.push(a);
		}
		else{
			right.push(a);
		}

		if(abs((int)left.size()-(int)right.size())>1){
			if(left.size()>right.size())
			{
				right.push(left.top());
				left.pop();
			}
			else{
				left.push(right.top());
				right.pop();
			}
		}

		if(left.size()>right.size()){
			cout<<left.top()<<"  ";
		}
		else if(right.size()>left.size()){
			cout<<right.top()<<" ";
		}
		else{
			cout<<(float(left.top())+float(right.top()))/2<<" ";
		}
	}
}