#include <iostream>
using namespace std;

void kya_print_karu(char kya,int kitna){
	for (int i = 0; i < kitna; ++i)
	{
		cout<<kya;
	}
}

int main(){
	int n = 5;
	for (int i = 1; i <= n; ++i)
	{
		//print spaces n-i
		kya_print_karu(' ',n-i);
		//print star 2*i -1
		kya_print_karu('*',2*i -1);
		//endl
		cout<<endl;
	}
	for (int i = 1; i <= n-1; ++i)
	{
		//space i times
		kya_print_karu(' ',i);
		//print star 2(n-i)-1
		kya_print_karu('*',2*(n-i)-1);
		//endl
		cout<<endl;
	}
}