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
ll n, k;
ll solve(){   
   //freopen("input.txt", "r", stdin);
   ll arr[n];
   for (ll i = 1; i <= n; i++)
   {
     cin>>arr[i];
   }
   for (ll i = 1; i <= n; i++)
   {
     if(i>=k){
       break;
     }else
     k-=i;
   }
   return arr[k];
}
int main(){
     speed();
  cin>>n>>k;
     cout<<solve();  
     ed
     return 0;
}