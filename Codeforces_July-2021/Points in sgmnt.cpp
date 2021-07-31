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
void solve(){   
  freopen("input.txt", "r", stdin);
  ll n, num;
	cin >> n >> num;
	vi cnt(num + 2);
	for (int i = 0; i < n; ++i) {
		int l, r;
		cin >> l >> r;
		++cnt[l];
		--cnt[r + 1];
	}
	for (int i = 1; i <= num; ++i)
		cnt[i] += cnt[i - 1];
	
	vi ans;
	for (int i = 1; i <= num; ++i) {
		if (cnt[i] == 0)
			ans.push_back(i);
	}
	
	cout << ans.sz;
  end
  if(ans.sz>0)
	{for (auto it : ans) cout << it << " ";
	end
  }
}
int main(){
     speed();

       solve();  
     
     return 0;
}