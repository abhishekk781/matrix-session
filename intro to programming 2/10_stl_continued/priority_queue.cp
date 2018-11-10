#include <bits/stdc++.h>
using namespace std;
int main(){
	priority_queue<int,vector<int>,greater<int> > q;
	q.push(10);
	q.push(12);
	q.push(2);
	q.push(100);
	cout<<q.top()<<" ";
	q.pop();
	cout<<q.top();
}