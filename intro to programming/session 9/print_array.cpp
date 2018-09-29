#include <iostream>
using namespace std;

void print_arr(int *arr,int n){

	if(n<0)
		return;
	cout<<arr[n];
	print_arr(arr,n-1);

}

int main(){
	int arr[] = {1,2,3,4,5,6,7};
	print_arr(arr,6);
}