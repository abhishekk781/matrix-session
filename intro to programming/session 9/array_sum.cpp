#include <iostream>
using namespace std;

int sum(int *arr,int start,int end){
	if(end == 0)
		return arr[start];
	int sum1 = sum(arr,start,end-1);
	return sum1+arr[end];
}

int main(){
	int n;
	cin>>n;
	int arr[100];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	cout<<sum(arr,0,n-1);
}