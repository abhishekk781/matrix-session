#include <iostream>
#include <stack>
#include<bits/stdc++.h>
using namespace std;
/*
template<class b>
void swap1(b &first,b &second){
	b temp;
	temp = first;
	first = second;
	second = temp;
}

*/

/*
template<class t>
class v{
	vector<t> v1;
public:
	void display(){
		for (int i = 0; i < v1.size(); ++i)
		{
			// cout<<v1<<" ";
		}
	}
};

*/
int main()
{
/*	string s1 = "hello",s2 = "bye";
	int a = 10,b1 = 100;
	swap1<int>(a,b1);
	cout<<a<<"  "<<b1;*/
	stack<int> s1;
	s1.push(12);
	s1.push(11);
	cout<<s1.top()<<" ";
	s1.pop();
	cout<<s1.empty()<<" ";
	cout<<s1.size()<<" ";
	cout<<s1.top();

	return 0;
}