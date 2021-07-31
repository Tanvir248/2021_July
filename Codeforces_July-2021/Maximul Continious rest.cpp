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
   //freopen("input.txt", "r", stdin);

vector<int> a(n);
for (ll i = 0; i < n; i++)
    cin >> a[i];
ll ans = 0;
ll len = 0;
for (int i = 0; i < 2 * n; i++) {
    if (a[i % n] == 1) {
        len++;
        ans = max(ans, len);
    } else {
        len = 0;
    }
}
        return ans;
}
int main(){
     speed();
   ll n;
cin >> n;
       cout<<solve(n);  
     ed
     return 0;
}