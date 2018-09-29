#include <bits/stdc++.h>

using namespace std;

int sum(int arr[][6],int i,int j){
	int add = 0;
	add = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]
			+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
	return add;
}

int main(){
	int arr[6][6] = {0};
	for (int i = 0; i < 6; ++i)
	{
		for(int j = 0;j<6;j++){
			cin>>arr[i][j];
		}
	}
	int abhitakkamax = INT_MIN;
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			  abhitakkamax=max(abhitakkamax,sum(arr,i,j));
		}
	}
	cout<<abhitakkamax<<endl;
}