#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[10000];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int maxim = INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		int sum = 0;
		for(int j = i;j< n;j++){
			sum = sum+arr[j];
			maxim = max(maxim,sum);
		}
	}
	cout<<maxim<<endl;
}