//type of triangle

#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a==b){
		if(b==c)
			cout<<"equilateral";
		else
			cout<<"isoscles";
	}
	else
	{
		if(b==c)
		{
			cout<<"isoscles";
		}
		else
			cout<<"scalene";
	}
}