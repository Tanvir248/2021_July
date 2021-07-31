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
ll cnt1, cnt;
ll solve(){   
   //freopen("input.txt", "r", stdin);
  ll n, t, c;
  cin>>n>>t>>c;
  ll num;
  for (ll i = 0; i < n; i++)
  {
    cin>>num;
    if(num<=t){
      cnt1++;
    }else{
      if(cnt1>=c){
          cnt+=(cnt1-(c-1));
         
      } 
      cnt1=0;
    }
  }
  if(cnt1>=c){
          cnt+=(cnt1-(c-1));
  }
  return cnt;
}
int main(){
     speed();

    cout<<solve();  
     ed
     return 0;
}