#include <iostream>
using namespace std;

int find_max(int arr[10],int n){
	int maxim = arr[0];
	int index = 0;

	for (int i = 1; i < n; ++i)
	{
		if(maxim < arr[i]){
			maxim = arr[i];
			index = i;
		}
	}
	return index;
}

void swap(int arr[10],int kisko,int kis_se){
	int temp = arr[kisko];
	arr[kisko] = arr[kis_se];
	arr[kis_se] = temp;
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
		int index = find_max(arr,n-i);
		swap(arr,index,n-i-1);
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" "n;
	}

}