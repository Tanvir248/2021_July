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
}mi add, sub;
	ll solve(ll n){   
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
  
	int x, y;


	

	ll ans = 0;

	for (ll i = 1; i <= n; i++)
	{
		cin >> x >> y;
		
		ans += add[x + y]; add[x + y]++;
		ans += sub[x - y]; sub[x - y]++;
	}

    
    return ans;
}
int main(){
     speed();
ll a;
	cin >> a;
       cout<<solve(a);  
     ed
     return 0;
}