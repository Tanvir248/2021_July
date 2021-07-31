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
   lln n, num;
    vector<pair<ll,ll>>pr;
	cin>>n>>num;
	ll k[n], l[n];
	for (ll i = 0; i < n; i++){
		cin>>k[i]>>l[i];
		pr.pb(make_pair(min(2 * k[i], l[i]) - min(k[i], l[i]), i));
	}
	sort(pr.rbegin(), pr.rend());
	ll sum =0;
	for (ll i = 0; i < num; i++)
	{
		int st = pr[i].second;
          sum+= min(2*k[st],l[st]);
	}
	for (ll i = num; i < n; i++)
	{
		int st = pr[i].second;
          sum+= min(k[st],l[st]);
	}
	cout<<sum<<endl;
}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
       solve();  
     
     return 0;
}