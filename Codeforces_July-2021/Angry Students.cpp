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

void solve() {
    ll n;
    cin>>n;
    ls s;
    cin>>s;
    ll ans =0, k=-1;
    for (ll i = 0; i < n; i++)
    {
       if(s[i]=='P'&& k > -1){
          ans= max(ans, i-k);
          }
          else if(s[i]=='A') 
             k =i;
       }
     cout<<ans<<endl;
     }

ll main() {
   ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
	int t;
	cin >> t;
	while(t--)
		solve();

//cout<<solve()<<endl;
    
	return 0;
}