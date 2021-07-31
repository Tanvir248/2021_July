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
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ll solve(ll n,ll k){   
ll arr[N];
  
  for (int i = 1; i <= n; ++i) {
    cin>>arr[i];
        }
  
  int mn = min_element(arr + 1, arr + n + 1) - arr;
  int ans = 0;
  
  for (int i = 1; i <= n; ++i) {
    if (i != mn) {
      while (arr[i] + arr[mn] <= k) {
        arr[i] += arr[mn];
        ++ans;
      }
    }
  }

  return ans;
  
}
int main(){
     speed();
      ll t;
      cin>>t;
      while (t--)
      {
       ll a, b;
       cin>>a>>b;
       cout<<solve(a, b); 
      end
      }      
     return 0;
}