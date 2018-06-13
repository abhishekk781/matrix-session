#include <iostream>
using namespace std;
int main(){
	double n;
	cin>>n;
	// float i = 0.00;
	// while(i*i<n){
	// 	cout<<i<<" ";
	// 	i = i+ 0.01000;
	// }
	double i;
	for ( i = 0.00; i*i < n; i=i+0.01){
		cout<<i<<" ";
	}
	cout<<i<<endl;
}