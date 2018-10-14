#include <bits/stdc++.h>
using namespace std;

void towerofhanoi(int n,char start,char end,char helper){
	if(n==0)
		return;
	towerofhanoi(n-1,start,helper,end);
	cout<<n<<" is transfered from "<<start<<" to "<<end<<endl;
	towerofhanoi(n-1,helper,end,start); 
}


int main(){
	towerofhanoi(4,'A','C','B');
}