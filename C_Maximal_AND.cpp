/*
  In the name of Allah, The Most Gracious and The Most Merciful.
 
  Glory be to You(Allah)! We have no knowledge except what You have taught us.
  It is you who are the Knowledgeable, the Wise.
*/

#include<bits/stdc++.h>
#define mod 1000000007
#define int long long int
using namespace std;
const int N = 2e5+10;


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        vector<int>v(n);
        for(int i=0;i<n;i++)cin>>v[i];

        vector<bitset< 31 >>B(n);

        for(int i=0;i<n;i++){
            B[i]=bitset< 31 >(v[i]);
        }


        int ans=0;
        for(int j=30;j>=0;j--){
             int cnt_0=0;
            for(int i=0;i<n;i++){
                if(B[i][j]==0){
                    cnt_0++;
                }
            }

            if(cnt_0<=k){
                k-=cnt_0;
                ans+=(1<<j);
            }
        }

        cout<< ans <<endl;
    }
    
    return 0;
}