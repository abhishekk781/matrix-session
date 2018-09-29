#include <iostream>
using namespace std;

void last_fix_kar(int arr[],int n){
	for (int i = 0; i < n-1; ++i)
	{
		if(arr[i]>arr[i+1]){
			swap(arr[i],arr[i+1]);
		}
	}
}

int main(){
	int n;
	cin>>n;
	int arr[100] = {0};
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	for (int i = 0; i < n; ++i)
	{
		last_fix_kar(arr,n);	
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}

}