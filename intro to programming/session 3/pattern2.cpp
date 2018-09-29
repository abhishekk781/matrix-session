/*

*****
****
***
**
*

*/

#include <iostream>
using namespace std;

//kya chahiye chahiye
//machine ka naam
// tum kya dene wale ho

void print_n_star(int n){
	for (int i = 1; i <= n ; i=i+1)
	{
		cout<<"*";
	}
}

int sum1(int a,int b){
	int c = a+b;
	return c;
}


int main(){
	int n =5;
	for (int i = 1; i <=5;i = i+1)
	{
		//print * this n-i+1
		print_n_star(i);
		cout<<endl;
	}
	int s = sum1(3,10);
	cout<<s;
}