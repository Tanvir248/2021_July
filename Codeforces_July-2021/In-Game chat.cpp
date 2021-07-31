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
string solve(ll a,ll b){   
  
	 ls s1 ="YES";
	 ls s2 ="NO";
	if(a>b/2){
		return s1;
	}else 
	return s2;
}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
		  // freopen("input.txt", "r", stdin);
   ll t;
   cin>>t; 
     while(t--){
		 ls s;
   ll n, cnt =0;
  cin>>n>>s;
  reverse(s.B, s.E);
	for (ll i = 0; i < n; i++)
	{
		if(s[i]==')'){
			cnt++;
		}else 
		break;
	} 
	 cout<<solve(cnt, n)<<endl;
	 }
     return 0;
}