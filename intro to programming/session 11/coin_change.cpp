#include <bits/stdc++.h>
using namespace std;

int memo[1000] ;

int number_of_coin(int arr[],int size,int rup){
	if(rup == 0)
		return 0;
	else if(rup < 0){
		return 100000;
	}
	if(memo[rup] != -1)
		return memo[rup];

	int num = 100000;
	for (int i = 0; i < size; ++i)
	{
		cout<<arr[i]<<" "<<rup<<endl;
		num = min(num,number_of_coin(arr,size,rup-arr[i]));
	}
	memo[rup] = num+1;
	return memo[rup];
}

int main(){
	for (int i = 0; i < 100; ++i)
	{
		memo[i] = -1;
	}
	int coin[5] ={1,4,7,17};
	int ruppee = 99;
	cout<<number_of_coin(coin,4,ruppee);
}