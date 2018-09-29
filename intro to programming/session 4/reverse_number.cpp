#include <iostream>
using namespace std;
int main(){
	int n,reverse = 0;
	cin>>n;
	while(n != 0){
		int unitplace = n%10;
		reverse = reverse*10 + unitplace;
		n = n/10;
	}
	cout<<reverse<<endl;
}