#include <iostream>
using namespace std;

void print_i_i_time(int x){
	for (int i = 0; i < x; ++i)
	{
		cout<<x;
	}
}
int main(){
	int n = 5;
	for (int i = 1; i <= n; ++i)
	{
		print_i_i_time(i);
		cout<<endl;
	}
}