#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int arr[10] = {1,4,2,3,5,6,7,8,9,0};
	sort(arr,arr+10);
	for (int i = 0; i < 10; ++i)
	{
		cout<<arr[i]<< " ";
	}
}