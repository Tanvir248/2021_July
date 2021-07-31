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
ll t;
	cin >> t;
	for (int i = 0; i < t; ++i) {
		int l1, r1, l2, r2;
		cin >> l1 >> r1 >> l2 >> r2;
		vector<int>a({l1, r1, l2, r2});
		int ans1 = 0, ans2 = 0;
		for (auto it : a) for (auto jt : a) {
			if (l1 <= it && it <= r1 && l2 <= jt && jt <= r2 && it != jt) {
				ans1 = it;
				ans2 = jt;
			}
		}
		cout << ans1 << " " << ans2;
	ed
     }
    
}
int main(){
     speed();

       solve();  
     
     return 0;
}