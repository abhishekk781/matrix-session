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
		v[idx] = max(v[2*idx],v[2*idx+1]);
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
			return INT_MIN;
		}

		//partial overlap
		int mid = (l+r)/2;
		return max(range_in(l,mid,ql,qr,idx*2) , range_in(mid+1,r,ql,qr,idx*2+1));
	}


	void update(int a,int b){
		update_in(0,n-1,1,a,b);
	}

	void update_in(int start,int end,int pos,int kaha_update,int kya_update){
		if(start > kaha_update || end < kaha_update){
			return;
		}
		if(start == end && start == kaha_update){
			v[pos] = kya_update;
			return;
		}

		int mid = (start+end)/2;
		update_in(start,mid,2*pos,kaha_update,kya_update);
		update_in(mid+1,end,2*pos+1,kaha_update, kya_update);
		v[pos] = max(v[2*pos],v[2*pos+1]);
	}

	void range_update(int l,int r,int x){
/*		for (int i = l; i <= r; ++i)
		{
			update_in(0,n-1,1,i,x);
		}*/


	}




	void print_tree(){
		for (int i = 0; i < 100; ++i)
		{
			cout<<v[i]<<" ";
		}
	}

};



int main()
{	int n;
	cin>>n;
	vector<int> v(50);
	segmenttree s(v);
	// s.range_update(0,3,5);
	// s.update(10,5);
	// s.update(2,7);
	// s.update(3,2);
	// s.print_tree();
	while(n--){
		int l,h,p,c,x;
		cin>>l>>h>>p>>c>>x;
		if(c==1){
			int m = s.range_query(x,x+l-1);
			s.range_update(x,x+l-1,m+1);
			s.update(x+p-1,m+1+h);
		}
		if(c==0){
			int m = s.range_query(x,x+l-1);
			int vh = s.range_query(x+p-1,x+p-1);
			// cout<<m<<" "<<vh<<endl;
			int inc = max(m,vh+h);
			s.range_update(x,x+l-1,inc+1);
		}
		// s.print_tree();
		// cout<<endl;
	}
	cout<<s.range_query(0,50);
}