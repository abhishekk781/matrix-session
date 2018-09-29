// program to write a number is prime or not
//gcd
//power
// prime sieve


#include <bits/stdc++.h>
using namespace std;

bool prime(int n){
	if(n==1){
		return false;
	}

	// int lim = sqrt(n);
	for (int i = 2; i*i <= n; ++i)
	{
		if(n%i == 0)
			return false;
	}
	return true;
}

int gcd_brute(int a,int b){
	int smaller = min(a,b);
	int currentgcd = 1;
	for(int i =2;i<= smaller;i++){
		if(a%i==0 && b%i ==0){
			currentgcd = i;
		}
	}
	return currentgcd;
}


int gcd(int a,int b){
	int c ;
	while(b!=0){
		c = b;
		b = a%b;
		a = c;
	}
	return a;
}


int power_a(int a,int b){
	int p = 1;
	for (int i = 1; i <=b ; ++i)
	{
		p = p*a;
	}
	return p;
}


int power(int a,int b){
	if(b==0){
		return 1;
	}

	int x = power(a,b/2);
	if(b%2==0){
		return x*x;
	} 
	else
	{
		return x*x*a;
	}
}

int MAX = 1000005;
int main(){
	// cout<<gcd(21,21);
	// cout<<__gcd(__gcd(21,13),16);


	//prime sieve
	vector<int> v(MAX+1,1);
	v[1] = 0;
	for(int i = 2;i*i<=MAX;i++){
		if(v[i]==1){
			for (int j = 2*i; j < MAX; j = j+i)
			{
				v[j] = 0;
			}
		}
	}


	cout<<v[3]<<" "<<v[23]<<" "<<v[57]<<" ";




}