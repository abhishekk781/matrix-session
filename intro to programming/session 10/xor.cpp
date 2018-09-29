#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int xor1 = 0;
	// int *arr = new int[n];
	for (int i = 0; i < n; ++i)
	{
		// cin>>arr[i];
		int a;
		cin>>a;
		xor1  = xor1^a;
	}

	cout<<xor1<<endl;

}