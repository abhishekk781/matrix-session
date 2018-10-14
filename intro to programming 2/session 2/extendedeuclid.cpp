#include <bits/stdc++.h>
using namespace std;


// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-1/tutorial/

long long x,y,gcd;
void extendedeuclid(long long a,long long b){

	if(b==0){
		x = 1;
		y = 0;
		gcd = a;
		return;
	}

	extendedeuclid(b,a%b);
	long long curx = y;
	long long cury = x - (a/b)*y;

	x = curx;
	y = cury;
	cout<<x<<" "<<y<<endl;


	return;

}



long long power(long long a,long long b,long long m){
	if(b==0){
		return 1;
	}

	long long x = power(a,b/2,m);
	if(b%2==0){
		return (x*x)%m;
	} 
	else
	{
		return (((x*x)%m)*a)%m;
	}
}

int main(){
	extendedeuclid(8,5);
	cout<<x;
	// (25/5)mod3
	extendedeuclid(5,3);
	long long ans = (25%3 * (x+3)%3)%3;
	cout<<ans<<endl;
}