#include <bits/stdc++.h>
using namespace std;
int main(){
	string s = "hello";
	// cout<<s.size()<<" ";
	s = s+s; //O(n)
	s.push_back('s'); //O(1)
	string s1;
	// cin>>s1;
	// getline(cin,s1);
	cout<<s1;
	string a="Hello",b = "hello";
	if(a==b){
		cout<<" YES ";
	}
	else
		cout<<"NO";
}