#include <iostream>
using namespace std;
int main(){
	int marks[10] ={0};
	for (int i = 0; i < 10; ++i)
	{
		cin>>marks[i];
	}
	int minimum = marks[0];
	int maxim = marks[0];

	for (int i = 1; i < 10; ++i)
	{
		if(maxim < marks[i]){
			maxim = marks[i];
		}
		if(minimum>marks[i]){
			minimum = marks[i];
		}
	}
	cout<<"maximum : "<<maxim<<endl;
	cout<<"minimum : "<<minimum<<endl;
	


}