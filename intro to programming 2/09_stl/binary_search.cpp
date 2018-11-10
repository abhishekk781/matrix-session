#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	int to_be_searched;
	cin>>to_be_searched;
/*	int start = 0;
	int end = n-1;
	while(start<=end){
		int mid = (start+end)/2;
		if(v[mid] == to_be_searched)
		{
			cout<<mid<<endl;
			break;
		}
		if(v[mid]<to_be_searched)
			start = mid+1;
		else
			end = mid-1;
	}*/
	// cout<<binary_search(v.begin(),v.end(),to_be_searched);
	cout<<(lower_bound(v.begin(),v.end(),to_be_searched))-v.begin()<<endl;
	cout<<(upper_bound(v.begin(),v.end(),to_be_searched))-v.begin();


}