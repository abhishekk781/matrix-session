#include <bits/stdc++.h>
using namespace std;

class car{
	int x,y,id;
public:
	car(int a,int b,int c){
		x = a;
		y = b;
		id = c;
	}
	float dis(){
		return sqrt(x*x + y*y);
	}
	void disp(){
		cout<<id<<" ";
	}
};

class com{
public:
	bool operator()(car a,car b){
		//kya b a se prior hai
		return a.dis()>=b.dis();
	}
	
};


int main(){
	priority_queue<car,vector<car>,com> q;
	car a(1,2,1),b(2,2,2),c(2,3,3);
	q.push(a);
	q.push(b);
	q.push(c);
	car d = q.top();
	d.disp();
	// a.f(3)
}