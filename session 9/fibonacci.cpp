#include <iostream>
using namespace std;

int fib(int n){
	if(n<=1)
		return n;
	int fibn = fib(n-1)+fib(n-2);
	return fibn;
}

int main(){
	cout<<fib(6);
}