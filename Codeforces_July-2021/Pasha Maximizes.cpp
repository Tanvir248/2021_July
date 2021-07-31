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
   //freopen("output.txt", "w", stdout);
   lln k;
   ls add;
   cin>>add>>k;
   
   for (ll i = 0; i < add.sz; i++)
   {
	   ll temp =i;
	  for (ll j = i+1; i < add.sz&&j-i<=k; j++)
	  {
		  if(add[j]>add[temp]){
			  temp =j;
		  }
	  }
	  for (ll x = temp; x > i;x--)
	  {
		  swap(add[x], add[x-1]);
	  }
	  k-= temp-i;
   }
   cout<<add;
   ed
}
int main(){
     speed();

       solve();  
     
     return 0;
}