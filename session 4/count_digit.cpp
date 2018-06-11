#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int counter = 0;
	//jabtak number 0 nahi ho jaata
	while(n != 0){
		n = n/10;
		counter++;
	}
	//tabtak divide kar 10 se
	//counter increment kar
	cout<<counter<<endl;
	
}