#include <iostream>
using namespace std;
int main(){
	int marks[10] = {0};
	cout<<marks<<"  "<<marks+1<<"  ";
	for (int i = 0; i < 10; ++i)
	{
		cout<<marks[i]<<" ";
	}
}