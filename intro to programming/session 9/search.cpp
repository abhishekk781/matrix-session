#include <iostream>
using namespace std;

int l_search(int arr[],int n,int kya_search_karna_hai){

	if(n<0)
		return -1;
	if(arr[n]==kya_search_karna_hai)
		return n;
	else
		return l_search(arr,n-1,kya_search_karna_hai);
}

//middle pe jaata hu kya mein number hoon
//nahi hu toh recursion se kahunga 

int b_search(int arr[],int start,int end,int num){
	if(start>end){
		return -1;
	}

	int mid = (start+end)/2;
	if(arr[mid] == num){
		return mid;
	}
	else if(arr[mid]>num){
		return b_search(arr,start,mid-1,num);
	}
	else
	{
		return b_search(arr,mid+1,end,num);
	}
}

int main(){
	int arr[] = {1,2,3,4,6,8,10,22,30};
	cout<<b_search(arr,0,8,22);
}