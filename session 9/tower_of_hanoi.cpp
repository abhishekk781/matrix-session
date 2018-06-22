#include <iostream>
using namespace std;

void bittoo(char source,char helper,char target,int n){

	if(n<=0)
		return;

	bittoo(source,target,helper,n-1);
	cout<<n<<" plate has reached "<<target <<" from "<<source<<endl;
	bittoo(helper,source,target,n-1);

}

int main(){
	bittoo('A','B','C',7);
}