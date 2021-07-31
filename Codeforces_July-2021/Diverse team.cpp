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
   //freopen("input.txt", "r", stdin);
   ll n, k;
	cin >> n >> k;
	set<ll> st;
	vi ans;
	for (ll i = 0; i < n; ++i) {
		ll num;
		cin >> num;
		if (!st.count(num)) {
			ans.push_back(i);
			st.insert(num);
		}
	}
	
	if (ll(ans.size()) < k) {
		no
	} else {
		yes
		for (ll i = 0; i < k; ++i)
			cout << ans[i] + 1 << " ";
		cout << endl;
	}


}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
       solve();  
     
     return 0;
}