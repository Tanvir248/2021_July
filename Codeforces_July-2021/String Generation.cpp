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
void next(char &x) {
    if (x <= 'b') x++;
    else x = 'a';
}
void solve() {
    ll n, k;
    cin >> n >> k;
    char cur = 'a';
    for (int i = 0; i < n; ++i) {
        cout << cur;
        next(cur);
    } 
    cout << endl;
}
 
int main(){
     speed();
  ll t;
  cin>>t;
  while(t--)
       solve();  
     
     return 0;
}