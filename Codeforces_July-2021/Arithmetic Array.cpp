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
ll solve(ll n){   
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
     vi add;
     ll num;
     for (ll i = 0; i < n; i++)
     {
          cin>>num;
          add.pb(num);
     }
     ll ans =0;
     for (ll i = 0; i < add.sz; i++)
     {
          ans+= add[i];
     }
     if(ans<n){
          return 1;
     }else return ans-n;
}
int main(){
     speed();
ll t;
cin>>t;
     while (t--)
     {
          ll a;
          cin>>a;
       cout<<solve(a);
       ed 
     }
      
     
     return 0;
}