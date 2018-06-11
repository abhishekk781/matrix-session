// n!/(n-r)!*r!
#include <iostream>
using namespace std;

int fact(int n){
	int factorial = 1;
	for (int i = 1; i <= n; ++i)
	{
		factorial = factorial*i;
	}
	cout<<factorial<<";
	return factorial;
}

int main(){
	int n,r;
	cin>>n>>r;
	int nfact = fact(n);
	int nminusr = fact(n-r);
	int rfact = fact(r);
	int ans = nfact/(nminusr*rfact);
	cout<<ans<<endl;


}