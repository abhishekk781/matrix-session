#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for (int j = 1; j <= n;j = j+1)
	{

	int input;
	cin>>input;
	int kya_number_prime_hai = 1;
	if(input ==1)
		cout<<"number is neither prime nor non prime";
	else
	{
		for(int i =2;i< input;i = i+1)
		{
			if(input%i == 0){
				kya_number_prime_hai = 0;
				break;
			}
			
		}
		if(kya_number_prime_hai == 0)
		{
			cout<<"Not Prime";
		}
		else
			cout<<"Prime";
	}
}
}