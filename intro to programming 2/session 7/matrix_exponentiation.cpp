#include <iostream>
using namespace std;

struct matrix
{
	int a,b,c,d;
};

matrix mul(matrix m1,matrix m2){
	matrix ans;
	ans.a = m1.a*m2.a + m1.b*m2.c;
	ans.b = m1.a*m2.b + m1.b*m2.d;
	ans.c = m1.c*m2.a + m1.d*m2.c;
	ans.d = m1.c*m2.b + m1.d*m2.d;
	return ans;
}

matrix power(matrix a,int b){
	if(b==1){
		return a;
	}
	matrix x = power(a,b/2);
	if(b%2==0){
		return mul(x,x);
	}
	else{
		return mul(mul(x,x),a);
	}
}

int fib(int n){
	matrix sol;
	sol.a = 0;
	sol.b = 1;
	sol.c = 1;
	sol.d = 1;
	sol = power(sol,n);
	return sol.b;
}

int main(){
	cout<<fib(10)<<endl;
}