#include <iostream>
using namespace std;
int main(){
	int input;
	cin>>input;
	int fact = 1;
	for (int i = 1; i <= input; i =i+1)
	{
		fact = fact*i;
	}
	cout<<fact;
}