#include<bits/stdc++.h>
using namespace std;

long power(int x,int y)
{
	if(y==0){ return 1; } // base case

	long ans=power(x,y-1);
	return x*ans;

}
int main()
{ 
	long result=power(4,5); // print 1024
	cout<<result<<endl;

	return 0;
}