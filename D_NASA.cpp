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
const int maxN=(1<<15);
vector<int>allpalindrome;

bool ok(int n){
     string s=to_string(n);
     string t=s;

     reverse(t.begin(),t.end());

     return t==s;
}

void cretepalindrome(){
  for(int i=0;i<maxN;i++){
       if(ok(i)){
        allpalindrome.push_back(i);
       }
  }

}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cretepalindrome();

     int t;
     cin>>t;

     while(t--){
        int n;
        cin>>n;

        vector<int>v(n),cnt(maxN);
        for(int i=0;i<n;i++){
            cin>>v[i];
            cnt[v[i]]++;
        }


        int ans=n;
        for(int i=0;i<n;i++){
            for(int j=0;j<allpalindrome.size();j++){
                int curr=(v[i]^allpalindrome[j]);
                ans+=cnt[curr];
            }
        }

        cout<< ans/2 <<endl;
     }
    
    return 0;
}