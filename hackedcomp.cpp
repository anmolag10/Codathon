#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;cin>>t;
    for(;t--;){
        int n,s;
        cin>>n>>s;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            v.push_back(x);

        }
        int c=1;
        for(int i=n-1;i>0;i--){
                if(v[i]-v[i-1]<=s)
                    c++;
                else{
                    break;
                }
            }
            cout<<c<<endl;
    }
    
}