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
    int t;cin>>t;for(;t--;){
        int a,b,c;
        cin>>a>>b>>c;
        int ct=0;
        do{
            a-=1;
            b-=2;
            c-=4;
            ct++;
        }
        while(a>=0&&b>=0&&c>=0);

        ct--;
        cout<<ct*7<<endl;




}
    
    
}
        