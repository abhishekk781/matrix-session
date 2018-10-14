#include <bits/stdc++.h>
using namespace std;

class segmenttree{
	int n;
	vector<int> v;
public:
	segmenttree(vector<int> arr){
		n = arr.size();
		v.resize(4*n);
		buildtree(arr,0,n-1,1);
	}

	void buildtree(vector<int> arr,int l,int r,int idx){
		if(l==r){
			v[idx]= arr[l];
			return;
		}
		int mid = (l+r)/2;
		buildtree(arr,l,mid,2*idx);
		buildtree(arr,mid+1,r,2*idx+1);
		v[idx] = v[2*idx]+v[2*idx+1];
	}

	int range_query(int ql, int qr){
		return range_in(0,n-1,ql,qr,1);
	}

	int range_in(int l,int r,int ql,int qr,int idx){
		//full overlap
		if(ql<=l && qr>=r){
			return v[idx];
		}

		//no overlap
		if(qr<l || ql>r){
			return 0;
		}

		//partial overlap
		int mid = (l+r)/2;
		return range_in(l,mid,ql,qr,idx*2) + range_in(mid+1,r,ql,qr,idx*2+1);
	}



	void print_tree(){
		for (int i = 0; i < 4*n; ++i)
		{
			cout<<v[i]<<" ";
		}
	}

};



int main(){
	int n;
	cin>>n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i)
	 {
	 	cin>>v[i];
	 } 
	segmenttree s(v);
	s.print_tree();
	int q;
	cin>>q;
	while(q--)
	{
		int a,b;
		cin>>a>>b;
		cout<<s.range_query(a,b)<<endl;
	}
}