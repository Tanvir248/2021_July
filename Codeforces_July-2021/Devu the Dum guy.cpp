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
const int N = int(1e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}lln arr[N];
lln solve(ll n , ll x){   
   //freopen("input.txt", "r", stdin);
 
    for (int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    ll ans=0;
    for (int i=0; i<n; i++)
        ans+=arr[i]*max(x-i,1);
    
	return ans;
}
int main(){
     speed();
   ll a, b;
   cin>>a>>b;
      cout<< solve(a, b);  
     ed
     return 0;
}