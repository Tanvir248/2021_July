
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
#define SZ 105
const int N = int(1e5 + 3);
void solve(){   
   
   ll t, s, num;
   vi add;
   cin>>t>>s;
   for (ll i = 0; i < t; i++)
   {
	   cin>>num;
	   add.pb(num);
   }
   ll sum =0;
   for (ll i = 0; i < add.sz; i++)
   {
	   sum+= add[i];
   }
   cout<<min(sum, s)<<endl;
}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
		  ll t;
		  cin>>t;
		  while(t--)
       solve();  
     
     return 0;
}