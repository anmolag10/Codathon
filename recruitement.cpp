#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int modf(int x){
    if(x>0)
        return x;
    else
        return x*-1;
}
int main(){
    int t;cin>>t;
    for(;t--;){
       int n;cin>>n;
       vector <int> v;
       int x;
       int m=0;
       for(int i=0;i<n;i++){
           cin>>x;
           v.push_back(x);
           m=max(m,x);
       }
       int c,m2=0;
        for(int i=2;i<m;i++){c=0;
            for(int j=0;j<n;j++){

                if(v[j]%i==0)
                    c++;
            }
            m2=max(m2,c);
        }
        cout<<m2<<endl;
    }
}