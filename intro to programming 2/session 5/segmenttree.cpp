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


	void update(int a,int b){
		update_in(0,n-1,1,a,b);
	}

	void update_in(int start,int end,int pos,int kaha_update,int kya_update){
		if(start > kaha_update || end < kaha_update){
			return;
		}
		if(start == end && start == kaha_update){
			v[pos] += kya_update;
			return;
		}

		int mid = (start+end)/2;
		update_in(start,mid,2*pos,kaha_update,kya_update);
		update_in(mid+1,end,2*pos+1,kaha_update, kya_update);
		v[pos] = v[2*pos]+v[2*pos+1];
	}

	void range_update(int l,int r,int x){
/*		for (int i = l; i <= r; ++i)
		{
			update_in(0,4,1,i,x);
		}*/
		update_range_in(0,n-1,l,r,x,1);
	}
	void update_range_in(int l,int r,int ql,int qr,int val,int pos){
		//no overlap
		if(ql>r || qr<l){
			return;
		}
		if(l==r && ql<=l && qr>=l){
			v[pos] += val;
			return;
		}
		int mid = (l+r)/2;
		update_range_in(l,mid,ql,qr,val,2*pos);
		update_range_in(mid+1,r,ql,qr,val,2*pos+1);
		v[pos] = v[2*pos]+v[2*pos+1];
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
	// int q;
	// cin>>q;
	// while(q--)
	// {
	// 	int a,b;
	// 	cin>>a>>b;
	// 	cout<<s.range_query(a,b)<<endl;
	// }
	cout<<endl;
	s.range_update(3,5,10);
	s.print_tree();
}