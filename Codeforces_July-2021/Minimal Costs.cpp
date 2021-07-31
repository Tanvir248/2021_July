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
const int N = int(1e6 + 6);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
ll n, q, a[N], cnt, u, v, ans =INT_MAX, T;
void solve(){   
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
    
    cin>>T;
	while(T--){
	    ans = INT_MAX;
	    cin >> n >> u >> v;
	    for(int i = 1; i <= n; i++)
		    cin >> a[i];
	    for(int i = 2; i <= n; i++)
	    {
		    if(abs(a[i] - a[i - 1]) >= 2) ans = 0;
	    	if(abs(a[i] - a[i - 1]) == 1) ans = min(ans, min(u, v));
		    if(a[i] == a[i - 1]) ans = min(ans, v + min(u, v));
	    }
	    cout << ans << endl;
	}
}
int main(){
     speed();

    solve();  
     
     return 0;
}