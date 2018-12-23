#include <bits/stdc++.h>
using namespace std;

template<class t,class f>
t sum1(t a,f b){
	return a+b;
}

class complex1{
public:
int real;
int img;
	complex1(int a,int b){
		real = a;
		img = b;
	}

	complex1 operator+(complex1 b){
		complex1 c(0,0);
		c.real = real + b.real;
		c.img = img + b.img;
		return c;
	}
	void disp(){
		cout<<real<<" + i"<<img<<endl;
	}
};

int main(){
	// cout<<sum1(1,2);
	// char a[] ="hello", b[] = "flkhj";
	// string a= "hello",b = "djhjdh";
	complex1 a(1,2),b(2,4);
	complex1 d = sum1(a,b);
	d.disp();
}