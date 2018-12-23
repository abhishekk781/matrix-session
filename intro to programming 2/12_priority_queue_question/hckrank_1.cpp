#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        if(i<2){
            cin>>x;
            v.push_back(x);
            cout<<"-1"<<endl;
        }
        else if(i==2){
            cin>>x;
            v.push_back(x);
            cout<<v[0]*v[1]*v[2]<<endl;
        }
        else
        {
            cin>>x;
            sort(v.begin(),v.end());
            if(v[0]>x){
                v[0]=x;
            }
            cout<<v[0]*v[1]*v[2]<<endl;
        }
    }
}