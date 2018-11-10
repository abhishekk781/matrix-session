#include <bits/stdc++.h>
using namespace std;

bool compare(int a,int b){
	// kya a b se pehle aana chahiye
/*	if(a>b)
		return true;
	return false;*/
	return a>b;
}


int main(){
	int n;
	cin>>n;
/*	int arr[100] = {};
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n,compare);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<" ";
	}
	*/
/*	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; ++i)
	{
		cout<<v[i];
	}*/


	std::vector<string> v(n);
	for (int i = 0; i < n; ++i)
	{
		getline(cin,v[i]);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; ++i)
	{
		cout<<v[i]<<endl;
	}

/*

	//sorting a string
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	cout<<s;
*/
}