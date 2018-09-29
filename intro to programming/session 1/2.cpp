#include <iostream>
using namespace std;
int main()
{
	int input1;
	cout<<"enter your chocice : ";
	cin>>input1;
	if(input1 == 1)
	{
		cout<<"enter two numbers : ";
		int num1,num2;
		cin>>num1>>num2;
		cout<<num1+num2;
	}
	else if(input1==2)
	{
		cout<<"enter two numbers : ";
		int num1,num2;
		cin>>num1>>num2;
		cout<<num1-num2;
	}

	else if(input1 == 3)
	{
		cout<<"enter two numbers : ";
		int num1,num2;
		cin>>num1>>num2;
		cout<<num1*num2;
	}

	else if (input1 == 4)
	{
		cout<<"enter two numbers : ";
		int num1,num2;
		cin>>num1>>num2;
		cout<<num1/num2;
	}
	else
	{
		cout<<"wrong choice ";
	}
}



