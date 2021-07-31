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
ll solve(ll n,ll k){   
   //freopen("input.txt", "r", stdin);
   vector<int> add(n);
	for (int i = 0; i < n; ++i)
		cin >> add[i];
	
	int ans = 0;
	while (!add.empty() && add.back() <= k) {
		++ans;
		add.pop_back();
	}
	reverse(add.begin(), add.end());
	while (!add.empty() && add.back() <= k) {
		++ans;
		add.pop_back();
	}
	return ans;

}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
          ll a, b;
          cin>>a>>b;

       cout<<solve(a, b)<<endl;  
     
     return 0;
}