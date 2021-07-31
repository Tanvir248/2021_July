#include<bits/stdc++.h>
using namespace std;
using ull = unsigned long long;
using lln = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using ll= int;
using ld = double;
#define pb  push_back
#define eb emplace_back
#define B begin()
#define E end()
#define sz size()
#define vi vector<int>
#define mi map<int, int>
#define pi pair<int, int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
const int N = int(1e5 + 3);
void solve(){   
  // freopen("input.txt", "r", stdin);
   ll n,k;
    ll t;
		  cin>>t;
		  while(t--){
         cin>>n>>k;
         vector<ll> ans(n+1);
         ll num=n;
         for(ll i=2;i<n;i+=2)
         {
              if(k==0)break;
              ans[i]=num--;
              k--;
         }
         if(k)
         {
             cout<<-1<<endl;
             continue;
         }
         int cur=1;
         for(int i=1;i<=n;i++)
         {
             if(!ans[i])
             ans[i]=cur++;
         }

         for(int i=1;i<=n;i++)
         cout<<ans[i]<<" ";
         cout<<endl;
}
}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
           solve();  
     
     return 0;
}