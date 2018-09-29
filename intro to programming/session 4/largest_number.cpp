#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int abhitakkamax;
	cin>>abhitakkamax;
	for (int i = 1; i <= n-1; ++i)
	{
		int a;
		cin>>a;
		if(a>abhitakkamax){
			abhitakkamax = a;
		}
	}
	cout<<abhitakkamax<<endl;
	
}