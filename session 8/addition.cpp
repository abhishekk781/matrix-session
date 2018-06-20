#include <iostream>
using namespace std;
int main()
{
	int arr[10][10] = {0},arr1[10][10] = {0};
	int m,n;
	cin>>m>>n;

	for (int i = 0; i < m; ++i)
	{
		for(int j =0;j<n;j++){
			cin>>arr[i][j];
		}
		
	}
	for (int i = 0; i < m; ++i)
	{
		for(int j =0;j<n;j++){
			cin>>arr1[i][j];
		}
		
	}
	int c[10][10] = {0};
	for (int i = 0; i < m; ++i)
	{
		for(int j =0;j<n;j++){
			c[i][j] = arr1[i][j]+arr[i][j];
		}
		
	}

	for (int i = 0; i < m; ++i)
	{
		for(int j =0;j<n;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}