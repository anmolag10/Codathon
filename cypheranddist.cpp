#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;cin>>t;
    for(;t--;){
        int n;cin>>n;
        int p1,pn;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            if(x==1)
                p1=i;
            if(x==n)
                pn=i;
        }
        x=pn-p1;
        if(x<0)
        x*=-1;
        if(x==n-1)
        cout<<x<<endl;
        else{
            int s;
            if(p1<pn){
                s=max(n-1-pn,p1-0);
            }
            else
            s=max(n-1-p1,pn-0);
            
            cout<<x+s<<endl;
        }


    }
    
}