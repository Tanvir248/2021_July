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
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
   //ll n, num;
    // cin>>n;
    // vi add;
ll n, k, l, r, s, sk;
 	cin >> n >> k >> l >> r >> s >> sk;
	ll tsk = s - sk;
	vi ans(n);
	for(ll i = 0; i < k; i++) {
		ans[i] = sk / k;
		if (sk % k != 0) ans[i]++, sk--;		 	
	}
	if (k != n) {
	 	for(ll i = k; i < n; i++) {
	 	 	ans[i] = tsk / (n - k);
	 	 	if (tsk % (n - k) != 0) ans[i]++, tsk--;
	 	}
	} 
    bool flag = true;
 
	for(int i = 0; i < k; i++) {
	 	if (ans[i] < l || ans[i] > r) flag = false;
	 	for(int j = k; j < n; j++) {
	 	 	if (ans[j] > ans[i]) flag = false;
	 	 	if (ans[j] < l || ans[j] > r)
	 	 		flag = false;
	 	}
	}
        random_shuffle(ans.begin(), ans.end());
	for(int i = 0; i < n; i++)
		cout << ans[i] << ' ';
}
int main(){
     speed();

       solve();  
     
     return 0;
}