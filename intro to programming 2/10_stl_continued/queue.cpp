#include <bits/stdc++.h>
using namespace std;
int main()
{
	queue<int> q;
	q.push(10);
	q.push(12);
	cout<<q.front()<<" "<<q.back()<<" ";
	q.pop();
	cout<<q.front()<<" "<<q.back()<<" ";
}