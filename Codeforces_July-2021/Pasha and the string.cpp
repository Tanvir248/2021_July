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
ls s;
ls solve(){   
   //freopen("input.txt", "r", stdin);
    ll x =s.sz;
  
   ll n;
    cin>>n;
    ll arr[n];
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
   } if(x==1){
   cout<<s;
    ed
    }
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
       a= arr[i]-1;
       b =x-arr[i];
   
    swap(s[a], s[a+1]);
   if(x>2){
    swap(s[b], s[b-1]);
    
    swap(s[a+1], s[b]);
   
    swap(s[a], s[b-1]);
    }
    //cout<<s<<" "; 
  //  cout<<s<<" ";
    }
    return s;
    
}
int main(){
     speed();
cin>>s;
     cout<<  solve();  
     ed
     return 0;
}