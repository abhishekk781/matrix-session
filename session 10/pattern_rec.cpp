#include <iostream>
using namespace std;

void pattern(int n){

	if(n==0)
		return;

	for (int i = 0; i < n; ++i)
	{
		cout<<"* ";
	}
	cout<<endl;
	pattern(n-1);
}

bool check_reverse(char *a,char *b,int len,int idx){

	if(idx == len)
		return true;

	if(a[idx] == b[len-idx-1])
		return check_reverse(a,b,len,idx+1);
	else 
		return false;
}

bool issorted(int arr[],int size,int idx){

	if(idx+1 == size)
		return true;

	if(arr[idx]<=arr[idx+1])
		return issorted(arr,size,idx+1);
	return false;
}


int main(){
	int n =5;
	// cin>>n;
	// pattern(n);
	// char a[] = "1235",b[] = "4321";
	// cout<<check_reverse(a,b,4,0);
	int arr[] = {1,2,3,4,5,6,2};
	cout<<issorted(arr,7,0);
}