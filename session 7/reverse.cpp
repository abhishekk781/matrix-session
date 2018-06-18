#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char arr[100];
	cin>>arr;
	int n = strlen(arr);
	int flag = 1;
	for (int i = 0; i < n/2; ++i)
	{
		swap(arr[i],arr[n-i-1]);
	}

	cout<<arr;

}