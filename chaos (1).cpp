#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;cin>>t;
    for(;t--;){
        string s;
        cin>>s;
        int m=0;
        string c="chaos";
        for(int i=0;i<s.length();i++){
            if(s[i]==c[m])
                m++;
        }
        if(m>4)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}