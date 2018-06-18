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
		if(arr[i] != arr[n-i-1])
		{
			flag = 0;
			break;
		}
	}

	if(flag == 1){
		cout<<"string is palindrome : ";
	}
	else
		cout<<"not palindrome : "<<endl;

}