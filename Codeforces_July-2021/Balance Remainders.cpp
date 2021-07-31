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
 #define ed cout<<endl;
const int N = int(1e5 + 3);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ll solve(ll n){   
 // freopen("input.txt", "r", stdin);
 
 
  vi add(n);
  for (int &x : add) {
    cin >> x;
  }

  ll ans = 0;
  vector<int> cnt(3);
  for (int x = 0; x <= 2; x++) {
      for (int i = 0; i < n; i++) {
          if (add[i] % 3 == x) {
              cnt[x]++;
          }
      }
  }
  
  while (*min_element(cnt.begin(), cnt.end()) != n / 3) {
      for (int i = 0; i < 3; i++) {
          if (cnt[i] > n / 3) {
              ans++;
              cnt[i]--;
              cnt[(i + 1) % 3]++;
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
    ll a;
    cin>>a;
     cout<<solve(a);
     ed 
}

      
     //ed
     return 0;
}