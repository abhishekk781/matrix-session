#include <iostream>
using namespace std;

void kya_print_karau(char kya,int kitna){
	for (int i = 0; i < kitna; ++i)
	{
		cout<<kya;
	}
}

int main(){
	int n = 7;
	kya_print_karau(' ',n-1);
	kya_print_karau('*',1);
	cout<<endl;

	for (int i = 2; i <= n; ++i)
	{
		//space n-i
		kya_print_karau(' ',n-i);
		//star 1
		kya_print_karau('*',1);
		//space 2*i -3
		if(i == n/2+1)
		{
			kya_print_karau('*',2*i-3);
		}
		else
		kya_print_karau(' ',2*i-3);
		//star 1
		kya_print_karau('*',1);
		//endl
		cout<<endl;
	}

}