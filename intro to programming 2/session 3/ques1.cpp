#include <iostream>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		if(n==1)
		{
			cout<<0<<endl;
			continue;
		}
		int sum = 1;
		for (int i = 2; i*i <= n ; ++i)
		{
			if(n%i==0){
				sum = sum+i;
				if(i*i != n)
				sum += n/i;
			}
		}
		cout<<sum<<endl;
	}	
}