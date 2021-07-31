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
#define end cout<<endl;
const int N = int(1e5 + 3);
ll ans =0;
ll solve(ll a, ll b){   
   //freopen("input.txt", "r", stdin);
   ll n1,n2,n3;
    ll add[10005];
  for (ll i = 0; i < b; i++)
  {
    cin>>n1>>n2>>n3;
    add[n1]-=n3;
    add[n2]+=n3;
  }
  for (ll i = 0; i <= a; i++)
  {
    if(add[i]>0){
      ans+= add[i];
    }
  }
  return ans;
}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
     ll n, m;
     cin>>n>>m;
       cout<<solve(n, m);  
     end
     return 0;
}