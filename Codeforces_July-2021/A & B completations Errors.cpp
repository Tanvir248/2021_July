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
lln a, b, c;
void solve(){   
   //freopen("input.txt", "r", stdin);
   ll n;
   cin>>n;
   for (ll i = 0; i < n; i++)
   {
     lln num;
     cin>>num;
     a+=num;
   }

   for (ll i = 0; i < n-1; i++)
   {
     lln num;
     cin>>num;
     b+=num;
   }

   for (ll i = 0; i < n-2; i++)
   {
     lln num;
     cin>>num;
     c+=num;
   }
   cout<<a-b;
   ed
   cout<<b-c;
   ed
}
int main(){
     speed();
solve();
    
     return 0;
}