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
ll n, m;
bool val(ll x, ll y){
   return x>0 && x<=n && y>0 && y<=m; 
}
void solve(){   
   //freopen("input.txt", "r", stdin);
   ll num1, num2;
   ll x, y;
    cin>>n>>m>>x>>y;
     vi add;
     ll a, cnt=0, ans =0;
     cin>>a;
  for (ll i = 0; i < a; i++){
    cin>>num1>>num2;
    ll mid, left =0, right =1e9+9;
  while(left<=right){

    mid = left+(right-left)/2;
    if(val(x+(num1*mid), y+(num2*mid))){
        cnt = mid;
        left = mid+1;
    }else{
      right = mid-1;
    }
  } 
    ans += cnt;
    x = num1*cnt+x;
    y = num2*cnt+y;
  }
  cout<<ans<<endl;
}
int main(){
     ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
       solve();  
     
     return 0;
}