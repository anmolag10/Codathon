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
        int x,y;cin>>x>>y;
        vector<int> x1,y1,v1;
        int a;
        for(int i=0;i<x;i++)
        {
            cin>>a;
            x1.push_back(a);
        }
        for(int i=0;i<y;i++){
            cin>>a;
            y1.push_back(a);

        }
        sort(x1.begin(),x1.end());
        sort(y1.begin(),y1.end());
       
      
       for(int i=0;i<x;i++){
            int m=INT_MAX;
           for(int j=0;j<y;j++){
               m=min(m,modf(x1[i]-y1[j]));

           }
           v1.push_back(m);
       }
       cout<<*max_element(v1.begin(), v1.end())<<endl;
    }
}