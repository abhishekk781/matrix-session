#include <bits/stdc++.h>
using namespace std;

int find_max_allocation(vector<int> pages,int books_allocated,int kitne_bacho_ko,int max_bache){
	if(books_allocated >= pages.size()){
		return 0;
	}
	if(kitne_bacho_ko >=max_bache)
		return INT_MAX;

	int sum = 0;
	int minimum = INT_MAX;
	for (int i = books_allocated; i <= pages.size(); ++i)
	{
		int ans =max(sum,find_max_allocation(pages,i,kitne_bacho_ko+1,max_bache));
		minimum = min(ans,minimum);
		sum =sum+pages[i];

	}
	cout<<minimum<<endl;
	return minimum;
}


int main(){
	int books,students;
	cin>>books>>students;
	vector<int> pages(books);
	for (int i = 0; i < books; ++i)
	{
		cin>>pages[i];
	}
	cout<<find_max_allocation(pages,0,0,students);
}