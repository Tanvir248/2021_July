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
void solve(){   

   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
 ll arr[100005], ans=INT_MAX, mx;
 ll n;
 cin>>n;
    for(ll i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+n);
    for (ll i = 0; i < n; i++)
    {
        mx = upper_bound(arr, arr+n, arr[i]*2)-arr;
        ans = min(ans, i+n-mx);
    }
    cout<<ans;
    ed 
}
int main(){
     speed();

 solve();  
     ed
     return 0;
}