/*
*_***_***_*
**_**_**_**
***_*_*_***
*/

#include <iostream>
using namespace std;

void print_star(int n){
	for (int i = 0; i < n; ++i)
	{
		cout<<"*";
	}
}
int main(){
	int n = 5;
	for (int i = 1; i <= n; ++i)
	{
		//print star i
		print_star(i);
		//1 space 
		cout<<" ";
		//star n-i+1
		print_star(n-i+1);
		//1 space
		cout<<" ";
		//star n-i+1
		print_star(n-i+1);
		//1 sapce
		cout<<" ";
		// star i
		print_star(i);
		// endl
		cout<<endl;
	}
}