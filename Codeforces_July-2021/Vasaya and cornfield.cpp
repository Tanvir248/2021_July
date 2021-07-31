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
ll n, d;
void solve(){   
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
	ll m;
	cin>>m;
	for (ll i = 0; i < m; i++)
	{
		ll a, b;
		cin>>a>>b;
		bool flag = true;
		if(!((a-b)<=d&&(a-b)>=-d)){
			flag =false;
		}else if(!((a+b)<=n+n-d&& (a+b)>=d)){
			flag =false;
		}
		if(flag){
			yes
		}else{
			no
		}
	}
	
}
int main(){
     speed();
cin>>n>>d;
       solve();  
     
     return 0;
}