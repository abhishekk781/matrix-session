#include <bits/stdc++.h>
using namespace std;
int main(){
	char a[100],b[100];
	cin>>a>>b;
	int x = strlen(a);
	int y  = strlen(b);
	if(x==y){
		int flag = 1;
		for (int i = 0; i < x; ++i)
		{
			if(a[i]!=b[i]){
				flag = 0;
				break;
			}
		}

		if(flag == 0){
			cout<<"not same ";
		}
		else
			cout<<"same ";

	}	
	else
		cout<<"not same ";
}