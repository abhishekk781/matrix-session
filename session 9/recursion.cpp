#include <iostream>
using namespace std;

int fact(int n){
	if(n==0){
		return 1;
	}
	int ans = fact(n-1);
	ans = ans*n;
	return ans;
}

int main(){
	int n;
	cin>>n;
	cout<<fact(n);
}