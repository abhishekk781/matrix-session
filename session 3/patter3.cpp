#include <iostream>
using namespace std;
//print space

void print_space(int a){
	for (int i = 0; i < a; ++i)
	{
		cout<<" ";
	}
}

void print_star(int n){
	for (int i = 0; i < n; ++i)
	{
		cout<<"*";
	}
}


int main()
{
	int n = 5;
	for(int i=1;i<=n;i=i+1)
	{
		//print spaces n-i
		print_space(n-i);
		//print star 2*i -1
		print_star(2*i -1);
		//endl
		cout<<endl;
	}
}



//kya chahiye
//naam
//kya denge machine ko