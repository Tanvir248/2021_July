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
#define mi map<int, int>
#define sz size()
#define vi vector<int>
#define yes cout<<"yes"<<endl;
 #define no cout<<"no"<<endl;
const int N = int(1e5 + 3);
void solve(){
   freopen("input.txt", "r", stdin);
 ll n, num;
 	cin >> n;
	 vi arr, b;

	for (ll i = 0; i < n; i++) {
		cin>>num;
	arr.pb(num);
		b.pb(arr[i]);
	}
	mi mp;
	sort(b.B, b.E);
	for (ll i = 0; i < n; i++) {
		mp[b[i]] = i;
	}
	for (ll i = 0; i < n; i++) {
		arr[i] = mp[arr[i]];
	}
	int l = -1;
	for (int i = 0; i < n; i++) {
		if (arr[i] != i) {
			l = i;
			break;
		}
	}
	ll r = -1;
	for (int i = n - 1; i >= 0; i--) {
		if (arr[i] != i) {
			r = i;
			break;
		}
	}
	if (l == -1 || r == -1) {
		yes
		cout << 1 << " " << 1 << endl;
	} else {
		reverse(arr.begin() + l, arr.begin() + r + 1);
		int ok = true;
		for (int i = 0; i < n; i++) {
			if (arr[i] != i) {
				ok = false;
			}
		}
		if (ok) {
			yes
			cout << l + 1 << " " << r + 1 << endl;
		} else {
			no
		}
	}
}

int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
          solve();
     return 0;
}