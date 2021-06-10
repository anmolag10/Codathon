#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;cin>>t;
    for(;t--;){
        ll n,a;
        cin>>n>>a;
        vector<ll>v;vector<ll> ans;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            v.push_back(x);
            if(i==0)
                ans.push_back(a^v[i]);
            else
                ans.push_back(ans[i-1]^v[i])
        }
        cout<<a<<" ";
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        
        cout<<endl;
    }
    
}