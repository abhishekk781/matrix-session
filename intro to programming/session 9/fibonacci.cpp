#include <bits/stdc++.h>

using namespace std;
int arr[100];
int fib(int n){
	if(n<=1)
		return n;
	if(arr[n] != -1)
		return arr[n];

	int fibn = fib(n-1)+fib(n-2);
	arr[n] = fibn;
	return fibn;
}

int main(){
	memset(arr,-1,100);
	cout<<fib(6);
}