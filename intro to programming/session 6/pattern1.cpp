
/*
A
BC
DEF
GHIJ
*/

#include <iostream>
using namespace std;
int main(){
	int n = 5;
	char tobeprinted = 'A';
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			cout<<tobeprinted<<" ";
			tobeprinted = tobeprinted+1;
		}
		cout<<endl;
	}
}

