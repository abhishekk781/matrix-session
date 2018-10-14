#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<int> differ(n-1);
    for(int i = 0;i<n-1;i++){
        differ[i] = v[i+1]-v[i];
    }
    int tgcd = differ[0];
    for(int i =0;i<n-1;i++){
        tgcd = __gcd(tgcd,differ[i]);
    }
    vector<int> factors;
    for(int i = 2;i*i<=tgcd;i++){
        if(n%i==0){
            factors.push_back(i);
            if(i*i != n){
                factors.push_back(n/i);
            }
        }
    }
    
    factors.push_back(tgcd);
    sort(factors.begin(),factors.end());
    for(int i = 0;i<n;i++){
        cout<<factors[i]<<" ";
    }
    
}