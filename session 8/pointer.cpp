#include <iostream>
using namespace std;
int main(){
	double a = 10.000;
	double *bittoo = &a;
	cout<<bittoo<<endl;
	cout<<*bittoo<<endl;
	cout<<*bittoo+1<<endl;
	cout<<*(bittoo+1)<<endl;
	cout<<(bittoo+1)<<endl;
	cout<<*bittoo++<<endl;
	cout<<*(bittoo)<<endl;
	cout<<bittoo<<endl;
}