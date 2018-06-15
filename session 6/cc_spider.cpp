#include <iostream>
using namespace std;
int main(){
	int T;
	cin>>T;
	while(T--){
		int n;
		cin>>n;
		int cur_num = 1,counter = 1,ap = 1;
		while(cur_num < n){
			cur_num = cur_num+ap+9;
			ap = ap+9;
			counter++;
		}
		cout<<counter<<endl;
	}
}