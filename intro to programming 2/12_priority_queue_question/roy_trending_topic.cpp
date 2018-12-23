#include <bits/stdc++.h>
using namespace std;

struct three
{
public:
	long long a,b,c;
	three(long long a1,long long b1,long long c1){
		a=a1;
		b=b1;
		c=c1;
	}
};

class compare{
public:
	bool operator()(three a1,three a2){
	    //return if a1 is ordered before a2
		if(a1.a != a2.a)
			return (a1.a > a2.a);
		else {
			return a1.b>=a2.b;
		}
	}
};



int main(){
	long long n;
	cin>>n;
	priority_queue<three,vector<three>,compare > pq;
	for (long long i = 0; i < n; ++i)
	{
		long long id,z,p,l,c,s;
		cin>>id>>z>>p>>l>>c>>s;
		long long x = p*50 + l*5 + c*10 + s*20;
		long long dif  =x-z;
		if(i<5){
				pq.push(three(dif,id,x));
		}
		else{
			pq.push(three(dif,id,x));
			pq.pop();
		}
	}
    vector<three > v;
	for(long long i=0;i<5;i++){
		v.push_back(pq.top());
// 		cout<<p.second<<" "<<p.first<<endl;
		pq.pop();
	}
	for(long long i=4;i>=0;i--){
	    cout<<v[i].b<<" "<<v[i].c<<endl;
	}

}