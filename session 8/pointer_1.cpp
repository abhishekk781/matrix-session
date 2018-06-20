#include <bits/stdc++.h>
using namespace std;

struct stu{
	char name[10];
	int rollno;
};

int main(){
	// stu a[100];
	
	// a[0].rollno = 1;
	// strcpy(a[0].name,"bittoo");


	// cout<<a[0].name<<" "<<a[0].rollno<<endl;

	stu* a = new stu;

	(*a).rollno = 10;
	cout<<a->rollno<<endl;

}