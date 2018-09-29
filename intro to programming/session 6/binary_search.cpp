#include <iostream>
using namespace std;
int main(){
	int size;
	cin>>size;
	int arr[100] = {0};
	for (int i = 0; i < size; ++i)
	{
		cin>>arr[i];
	}
	int konsa_number;
	cin>>konsa_number;
	int start = 0;
	int end = size-1;
	int mid = (start+end)/2;
	while(arr[mid] != konsa_number && start < end){
		if(arr[mid] < konsa_number){
			start = mid+1;
		}
		else
		{
			end = mid-1;
		}

		mid  = (start+end)/2;
	}
	if(arr[mid]== konsa_number){
		cout<<"element found at index "<<mid<<endl;
	}
	else
	{
		cout<<"ooops number not found \n";
	}



}