#include <iostream>
using namespace std;

void print_c(int x,int& start){
	for (int i = 0; i < x; ++i)
	{
		cout<<start<<" ";
		start++;
	}
	// return start;
}

int main(){
	int n = 5,counter = 1;
	for (int i = 1; i <= n; ++i)
	{
		print_c(i,counter);
		// counter = counter+i;
		cout<<endl;
	}
}