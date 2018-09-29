#include <iostream>
using namespace std;
int main(){
	int n,i = 5,conter = 0;
	cin>>n;
	while(n/i != 0){
		conter = conter+n/i;
		i = i*5;
	}
	cout<<conter<<endl;
}