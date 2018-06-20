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
	int m1,n1;
	cin>>m1>>n1;
	for (int i = 0; i < m1; ++i)
	{
		for(int j =0;j<n1;j++){
			cin>>arr1[i][j];
		}
		
	}
	int c[10][10] = {0};
	if(n == m1){
		for (int i = 0; i < m; ++i)
		{
			for(int j =0;j<n1;j++){
				for(int k = 0;k<n;k++){
					c[i][j] = c[i][j]+(arr[i][k]*arr1[k][j]);
				}
			}
			
		}
	}

	for (int i = 0; i < m; ++i)
	{
		for(int j =0;j<n1;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
}