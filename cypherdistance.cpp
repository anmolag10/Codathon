#include <bits/stdc++.h>
using namespace std;
int find_max_dist(vector<int>&arr, int N)
{
 
    int minIdx = -1, maxIdx = -1;
 
    for (int i = 0; i < N; i++) {
        if (arr[i] == 1 || arr[i] == N) {
            if (minIdx == -1)
                minIdx = i;
            else {
                maxIdx = i;
                break;
            }
        }
    }
 
    return maxIdx - minIdx
           + max(minIdx, N - 1 - maxIdx);
}
 
int main()
{
    vector<int> num;
    int n ; cin>>n;
    int val;
 
       for( int i =0 ; i <n ; i++)
    {
        cin >> val;
        num.emplace_back(val);
    }


    cout<<find_max_dist(num,num.size());
    cout<<endl;
}
